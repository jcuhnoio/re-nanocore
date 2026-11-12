// Port of tools/custom_fx/raw_dfu.py. All addresses are relative to OS.
export const OS_SIZE = 868352;
export const BLOCK = 4096;
export const SECTOR = 65536;
export const USB_FILTER = { vendorId: 0x33c3, productId: 0x6678 };
const require = (ok, message) => { if (!ok) throw new Error(message); };
const equal = (a, b) => a.length === b.length && a.every((byte, i) => byte === b[i]);
const sleep = ms => new Promise(resolve => setTimeout(resolve, ms));
const address = (command, offset) => {
  const bytes = new Uint8Array(5);
  bytes[0] = command;
  new DataView(bytes.buffer).setUint32(1, offset, true);
  return bytes;
};
const hash = async bytes => Array.from(new Uint8Array(await crypto.subtle.digest('SHA-256', bytes)), b => b.toString(16).padStart(2, '0')).join('');

export class WebUSBTransport {
  constructor(device, { timeoutMs = 5000 } = {}) {
    this.device = device;
    this.timeoutMs = timeoutMs;
    this.failed = false;
    this.busy = false;
    this.claimed = false;
  }

  async operation(fn) {
    require(!this.failed, 'USB session stopped after an error; reconnect before continuing');
    require(!this.busy, 'Concurrent USB operations are not permitted');
    this.busy = true;
    let timer;
    try {
      return await Promise.race([
        Promise.resolve().then(fn),
        new Promise((_, reject) => { timer = setTimeout(() => reject(new Error('USB transfer timed out; session stopped')), this.timeoutMs); }),
      ]);
    } catch (error) {
      this.failed = true;
      throw error;
    } finally {
      clearTimeout(timer);
      this.busy = false;
    }
  }

  async transfer(type, request, value, payload, index = 0) {
    return this.operation(async () => {
      const setup = {
        requestType: type & 0x20 ? 'class' : 'standard',
        recipient: type & 1 ? 'interface' : 'device', request, value, index,
      };
      if (type & 0x80) {
        const result = await this.device.controlTransferIn(setup, payload);
        require(result.status === 'ok' && result.data?.byteLength === payload, `USB read failed or short (request ${request})`);
        return new Uint8Array(result.data.buffer, result.data.byteOffset, result.data.byteLength).slice();
      }
      const result = await this.device.controlTransferOut(setup, payload);
      require(result.status === 'ok' && result.bytesWritten === payload.length, `USB write failed or short (request ${request})`);
      return new Uint8Array();
    });
  }

  static async open(device, options) {
    require(device?.vendorId === USB_FILTER.vendorId && device.productId === USB_FILTER.productId, 'Select NanoCore Lupgrader 33c3:6678');
    const transport = new WebUSBTransport(device, options);
    try {
      await transport.operation(() => device.open());
      const head = await transport.transfer(0x80, 6, 0x200, 9);
      const length = head[2] | head[3] << 8;
      require(head[0] === 9 && head[1] === 2 && length >= 9 && length <= 4096, 'Unexpected USB configuration');
      const config = await transport.transfer(0x80, 6, 0x200, length);
      const interfaces = [], functional = [];
      for (let offset = 0; offset < config.length;) {
        const size = config[offset];
        require(size >= 2 && offset + size <= config.length, 'Malformed USB descriptor');
        const descriptor = config.slice(offset, offset + size);
        if (descriptor[1] === 4) interfaces.push(descriptor);
        if (descriptor[1] === 0x21) functional.push(descriptor);
        offset += size;
      }
      require(interfaces.length === 1 && functional.length === 1, 'Unexpected USB interfaces');
      const [iface] = interfaces, [dfu] = functional;
      require(iface.length === 9 && iface[2] === 0 && iface[3] === 0 && iface[5] === 0xfe && iface[6] === 1 && iface[7] === 2, 'Not the expected DFU interface');
      require(dfu.length === 9 && (dfu[5] | dfu[6] << 8) === BLOCK && (dfu[2] & 3) === 3, 'Unexpected DFU capabilities');
      require(iface[8] !== 0, 'Missing OS interface name');
      const prefix = await transport.transfer(0x80, 6, 0x300 | iface[8], 2, 0x409);
      require(prefix[0] >= 2 && prefix[0] % 2 === 0 && prefix[1] === 3, 'Malformed OS interface name');
      const name = await transport.transfer(0x80, 6, 0x300 | iface[8], prefix[0], 0x409);
      require(name[1] === 3 && new TextDecoder('utf-16le').decode(name.slice(2)) === 'os', 'DFU interface is not os');
      if (device.configuration?.configurationValue !== config[5]) await transport.operation(() => device.selectConfiguration(config[5]));
      await transport.operation(() => device.claimInterface(0));
      transport.claimed = true;
      return transport;
    } catch (error) {
      await transport.close();
      throw error;
    }
  }

  async close() {
    // Never reset: a failed write must remain in the bootloader for recovery.
    if (this.claimed) {
      this.claimed = false;
      try { await this.device.releaseInterface(0); } catch { /* disconnected */ }
    }
    try { await this.device.close(); } catch { /* disconnected */ }
    this.failed = true;
  }
}

export class RawOS {
  constructor(transport, options = {}) {
    this.transport = transport;
    this.sleep = options.sleep ?? sleep;
    this.onProgress = options.onProgress ?? (() => {});
    this.stopped = false;
    this.running = false;
  }
  transfer(...args) { return this.transport.transfer(...args); }
  async exclusive(operation) {
    require(!this.stopped, 'DFU session stopped after an error');
    require(!this.running, 'DFU operation already running');
    this.running = true;
    try { return await operation(); }
    catch (error) { this.stopped = true; throw error; }
    finally { this.running = false; }
  }
  async idle() {
    const state = (await this.transfer(0xa1, 5, 0, 1))[0];
    if (state === 10) await this.transfer(0x21, 4, 0, new Uint8Array());
    else if (state !== 2) await this.transfer(0x21, 6, 0, new Uint8Array());
    require((await this.transfer(0xa1, 5, 0, 1))[0] === 2, 'Not DFU idle');
  }
  async download(block, payload) {
    await this.transfer(0x21, 1, block, payload);
    for (let attempt = 0; attempt < 100; attempt++) {
      const status = await this.transfer(0xa1, 3, 0, 6);
      require(status[0] === 0 && [3, 4, 5].includes(status[4]), 'DFU download error');
      if (status[4] === 5) return;
      const delay = status[1] | status[2] << 8 | status[3] << 16;
      require(delay <= 5000, 'Unexpected DFU polling delay');
      await this.sleep(Math.max(1, delay));
    }
    throw new Error('DFU poll limit exceeded');
  }
  async read(onProgress, phase) {
    const result = new Uint8Array(OS_SIZE);
    await this.idle();
    onProgress({ phase, completed: 0, total: OS_SIZE });
    for (let offset = 0; offset < OS_SIZE; offset += BLOCK) {
      await this.download(0, address(0x21, offset));
      await this.idle();
      const block = await this.transfer(0xa1, 2, 2, BLOCK);
      require(block.length === BLOCK, 'Incomplete OS read');
      result.set(block, offset);
      await this.idle();
      onProgress({ phase, completed: offset + BLOCK, total: OS_SIZE });
    }
    return result;
  }
  readPartition(onProgress = this.onProgress) {
    return this.exclusive(() => this.read(onProgress, 'read'));
  }
  async program({ expectedCurrent, target, backupSaved, onVerified, onProgress = this.onProgress }) {
    return this.exclusive(async () => {
      require(expectedCurrent instanceof Uint8Array && target instanceof Uint8Array && expectedCurrent.length === OS_SIZE && target.length === OS_SIZE, 'Full OS partitions required');
      // Copy before awaiting so UI callbacks cannot mutate the planned image.
      const expected = expectedCurrent.slice(), image = target.slice();
      const sectors = [];
      for (let offset = 0; offset < OS_SIZE; offset += SECTOR) {
        if (!equal(expected.subarray(offset, offset + SECTOR), image.subarray(offset, offset + SECTOR))) sectors.push(offset);
      }
      require(sectors.every(offset => offset + SECTOR <= OS_SIZE), 'Changed final partial erase sector; refusing possible preset damage');
      require(typeof backupSaved === 'function', 'Saved backup confirmation required before programming');
      const current = await this.read(onProgress, 'preflight');
      require(equal(current, expected), 'Live OS differs from expected current image; no writes performed');
      require(await backupSaved(current.slice()) === true, 'Backup was not confirmed saved; no writes performed');
      await this.idle();
      onProgress({ phase: 'write', completed: 0, total: sectors.length * SECTOR });
      let completed = 0;
      for (const offset of sectors) {
        await this.download(0, address(0x41, offset));
        await this.download(0, address(0x21, offset));
        for (let relative = 0; relative < SECTOR; relative += BLOCK) {
          await this.download(relative / BLOCK + 2, image.subarray(offset + relative, offset + relative + BLOCK));
          completed += BLOCK;
          onProgress({ phase: 'write', completed, total: sectors.length * SECTOR });
        }
        await this.idle();
      }
      const actual = await this.read(onProgress, 'verify');
      require(equal(actual, image), 'Full readback mismatch; do not reboot; restore required');
      const receipt = {
        input_sha256: await hash(current), output_sha256: await hash(actual), bytes: actual.length,
        erased_os_relative_sectors: sectors, exact_match: true,
      };
      if (onVerified) await onVerified(actual.slice(), receipt);
      await this.idle();
      await this.transfer(0x21, 1, 2, new Uint8Array());
      const status = await this.transfer(0xa1, 3, 0, 6);
      require(status[0] === 0 && status[4] === 8, 'Unexpected manifestation status; inspect device state');
      receipt.manifestation_status = Array.from(status, byte => byte.toString(16).padStart(2, '0')).join('');
      onProgress({ phase: 'complete', completed: OS_SIZE, total: OS_SIZE });
      return receipt;
    });
  }
}
