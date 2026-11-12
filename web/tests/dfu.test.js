import test from 'node:test';
import assert from 'node:assert/strict';
import { WebUSBTransport, RawOS, OS_SIZE, BLOCK, SECTOR } from '../dfu.js';

class Pedal {
  vendorId = 0x33c3;
  productId = 0x6678;
  configuration = { configurationValue: 1 };
  config = Uint8Array.from([9,2,27,0,1,1,0,0x80,50, 9,4,0,0,0,0xfe,1,2,1, 9,0x21,3,0,0,0,16,0x10,1]);
  memory = Uint8Array.from({ length: OS_SIZE }, (_, i) => (i * 7) % 251);
  state = 2;
  pointer = 0;
  erases = [];
  writes = 0;
  manifested = false;
  reads = 0;
  corrupt = false;
  disconnected = false;
  pollBusy = false;
  async open() {}
  async close() { this.closed = true; }
  async claimInterface(i) { assert.equal(i, 0); }
  async releaseInterface(i) { assert.equal(i, 0); this.released = true; }
  check(setup) {
    if (this.disconnected) throw new Error('Device disconnected');
    assert.equal(setup.recipient, setup.request === 6 && setup.requestType === 'standard' ? 'device' : 'interface');
    if (setup.requestType === 'class') assert.equal(setup.index, 0);
  }
  async controlTransferIn(setup, length) {
    this.check(setup);
    let bytes;
    if (setup.requestType === 'standard') {
      assert.equal(setup.request, 6);
      bytes = setup.value === 0x200 ? this.config.slice(0, length) : Uint8Array.from([6,3,111,0,115,0]).slice(0, length);
    } else if (setup.request === 5) bytes = Uint8Array.of(this.state);
    else if (setup.request === 3) {
      if (this.state === 3) { this.state = 4; bytes = Uint8Array.of(0,7,0,0,4,0); }
      else { if (this.state === 4) this.state = 5; bytes = Uint8Array.of(0,0,0,0,this.state,0); }
    } else if (setup.request === 2) {
      assert.equal(setup.value, 2); assert.equal(length, BLOCK); assert.equal(this.state, 2);
      bytes = this.memory.slice(this.pointer, this.pointer + length);
      if (this.corrupt && this.writes) bytes[0] ^= 1;
      this.reads++; this.state = 9;
    } else throw new Error('Unexpected request');
    return { status: 'ok', data: new DataView(bytes.buffer, bytes.byteOffset, bytes.byteLength) };
  }
  async controlTransferOut(setup, bytes) {
    this.check(setup);
    assert.equal(setup.requestType, 'class');
    if (setup.request === 4 || setup.request === 6) this.state = 2;
    else if (setup.request === 1) {
      if (!bytes.length) { this.manifested = true; this.state = 8; }
      else if (setup.value === 0) {
        assert.equal(bytes.length, 5);
        const offset = new DataView(bytes.buffer, bytes.byteOffset, bytes.byteLength).getUint32(1, true);
        if (bytes[0] === 0x21) this.pointer = offset;
        else if (bytes[0] === 0x41) { this.erases.push(offset); this.memory.fill(255, offset, offset + SECTOR); }
        else throw new Error('Unexpected command');
        this.state = this.pollBusy ? 3 : 5;
      } else {
        assert.equal(bytes.length, BLOCK);
        this.memory.set(bytes, this.pointer + (setup.value - 2) * BLOCK);
        this.writes++; this.state = this.pollBusy ? 3 : 5;
      }
    } else throw new Error('Unexpected request');
    return { status: 'ok', bytesWritten: bytes.length };
  }
}
async function fixture() {
  const pedal = new Pedal();
  const transport = await WebUSBTransport.open(pedal);
  const waits = [];
  const dfu = new RawOS(transport, { sleep: async ms => waits.push(ms) });
  return { pedal, transport, dfu, waits };
}

test('full read, fresh preflight, dynamic sector writes, exact readback and manifestation', async () => {
  const { pedal, transport, dfu, waits } = await fixture();
  const current = await dfu.readPartition();
  assert.deepEqual(current, pedal.memory);
  const target = current.slice(); target[11] ^= 1; target[SECTOR * 3 + 2] ^= 1;
  pedal.pollBusy = true;
  let gate = false, verified = false;
  const progress = [];
  const receipt = await dfu.program({ expectedCurrent: current, target,
    backupSaved: async bytes => { assert.equal(pedal.erases.length, 0); assert.equal(pedal.reads, OS_SIZE / BLOCK * 2); assert.deepEqual(bytes, current); gate = true; return true; },
    onVerified: async bytes => { assert.ok(gate); assert.equal(pedal.manifested, false); assert.deepEqual(bytes, target); verified = true; },
    onProgress: info => progress.push(info),
  });
  assert.ok(verified); assert.ok(pedal.manifested);
  assert.deepEqual(pedal.erases, [0, SECTOR * 3]); assert.equal(pedal.writes, 32);
  assert.equal(receipt.bytes, OS_SIZE); assert.equal(receipt.exact_match, true);
  assert.match(receipt.output_sha256, /^[0-9a-f]{64}$/);
  assert.equal(receipt.manifestation_status, '000000000800');
  assert.ok(waits.length > 0 && waits.every(ms => ms === 7));
  assert.equal(progress.at(-1).phase, 'complete');
  await transport.close(); assert.ok(pedal.closed && pedal.released);
});

test('corrupt readback stops without manifestation or later retry', async () => {
  const { pedal, dfu } = await fixture();
  const current = pedal.memory.slice(), target = current.slice(); target[1] ^= 1; pedal.corrupt = true;
  await assert.rejects(dfu.program({ expectedCurrent: current, target, backupSaved: async () => true }), /readback mismatch/);
  assert.equal(pedal.manifested, false);
  await assert.rejects(dfu.readPartition(), /session stopped/);
});

test('backup gate required and declining it performs no erase or data write', async () => {
  for (const backupSaved of [undefined, async () => false]) {
    const { pedal, dfu } = await fixture();
    const current = pedal.memory.slice(), target = current.slice(); target[1] ^= 1;
    await assert.rejects(dfu.program({ expectedCurrent: current, target, backupSaved }), /backup|Backup/);
    assert.deepEqual(pedal.erases, []); assert.equal(pedal.writes, 0); assert.equal(pedal.manifested, false);
  }
});

test('fresh preflight rejects stale snapshot before backup gate', async () => {
  const { pedal, dfu } = await fixture();
  const current = pedal.memory.slice(), target = current.slice(); target[2] ^= 1; pedal.memory[15] ^= 1;
  await assert.rejects(dfu.program({ expectedCurrent: current, target, backupSaved: () => assert.fail('Gate called') }), /Live OS differs/);
  assert.deepEqual(pedal.erases, []);
});

test('partial final sector and partial images rejected before reads/writes', async () => {
  for (const partial of [true, false]) {
    const { pedal, dfu } = await fixture();
    const current = pedal.memory.slice(), target = partial ? current.slice(0, -1) : current.slice(); target[target.length - 1] ^= 1;
    await assert.rejects(dfu.program({ expectedCurrent: current, target, backupSaved: async () => true }), /Full OS|partial erase sector/);
    assert.equal(pedal.reads, 0); assert.deepEqual(pedal.erases, []);
  }
});

test('wrong USB identity, interface, transfer size and partition name rejected', async () => {
  for (const mutate of [p => p.productId = 0x1301, p => p.config[11] = 1, p => p.config[15] = 2, p => p.config[24] = 8,
    p => { const original = p.controlTransferIn.bind(p); p.controlTransferIn = async (s, n) => { const r = await original(s, n); if (s.requestType === 'standard' && s.value === 0x301 && n > 2) r.data.setUint8(2, 120); return r; }; }]) {
    const pedal = new Pedal(); mutate(pedal);
    await assert.rejects(WebUSBTransport.open(pedal));
    assert.deepEqual(pedal.erases, []);
  }
});

test('disconnect stops operation without reset or reboot', async () => {
  const { pedal, dfu } = await fixture(); pedal.disconnected = true;
  await assert.rejects(dfu.readPartition(), /disconnected/);
  assert.equal(pedal.manifested, false); assert.deepEqual(pedal.erases, []);
});

test('timeout poisons session even if pending USB call subsequently completes', async () => {
  const pedal = new Pedal();
  const transport = await WebUSBTransport.open(pedal, { timeoutMs: 10 });
  let finish, calls = 0;
  pedal.controlTransferIn = () => { calls++; return new Promise(resolve => finish = resolve); };
  await assert.rejects(transport.transfer(0xa1, 5, 0, 1), /timed out/);
  await assert.rejects(transport.transfer(0xa1, 5, 0, 1), /session stopped/);
  finish({ status: 'ok', data: new DataView(Uint8Array.of(2).buffer) });
  await assert.rejects(transport.transfer(0xa1, 5, 0, 1), /session stopped/);
  assert.equal(calls, 1);
});

test('short transfer poisons transport and failure saving verification prevents manifestation', async () => {
  const { pedal, transport } = await fixture();
  pedal.controlTransferIn = async () => ({ status: 'ok', data: new DataView(new ArrayBuffer(0)) });
  await assert.rejects(transport.transfer(0xa1, 5, 0, 1), /short/);
  assert.ok(transport.failed);
  const other = await fixture();
  const current = other.pedal.memory.slice(), target = current.slice(); target[1] ^= 1;
  await assert.rejects(other.dfu.program({ expectedCurrent: current, target, backupSaved: async () => true, onVerified: async () => { throw new Error('Storage full'); } }), /Storage full/);
  assert.equal(other.pedal.manifested, false);
});

test('DFU status errors and excessive poll delay stop without recovery commands', async () => {
  for (const status of [[1,0,0,0,10,0], [0,137,19,0,4,0]]) {
    const { pedal, dfu } = await fixture();
    const original = pedal.controlTransferIn.bind(pedal);
    pedal.controlTransferIn = async (setup, length) => setup.requestType === 'class' && setup.request === 3
      ? { status: 'ok', data: new DataView(Uint8Array.from(status).buffer) }
      : original(setup, length);
    await assert.rejects(dfu.readPartition(), /DFU download error|polling delay/);
    assert.deepEqual(pedal.erases, []); assert.equal(pedal.manifested, false);
    await assert.rejects(dfu.readPartition(), /session stopped/);
  }
});

test('concurrent reads cannot interleave DFU address commands', async () => {
  const { dfu } = await fixture();
  const reading = dfu.readPartition();
  await assert.rejects(dfu.readPartition(), /already running/);
  assert.equal((await reading).length, OS_SIZE);
});
