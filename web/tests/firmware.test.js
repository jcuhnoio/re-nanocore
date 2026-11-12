import test from 'node:test';
import assert from 'node:assert/strict';
import {readFile} from 'node:fs/promises';
import {sha256, validateImage, install, prepareRestore, identifyImage} from '../firmware.js';

const toHex = b => Buffer.from(b).toString('hex');
async function fixture(version='1.10') {
  const stock = Uint8Array.from({length: 192}, (_, i) => i);
  stock[0]=Number(version.slice(2));
  const replacement = stock.slice(); replacement.set([90,91,92], 72);
  const patches = [{offset:72, beforeHex:toHex(stock.slice(72,75)), afterHex:'5a5b5c'}];
  // Synthetic trusted hash values exercise state matching, not hash generation.
  const hashes = [{segment:'code', algorithm:'crc32', offset:12, beforeHex:toHex(stock.slice(12,16)), afterHex:'aabbccdd'},
    {segment:'code', algorithm:'md5', offset:16, beforeHex:toHex(stock.slice(16,32)), afterHex:'aa'.repeat(16)}];
  for (const h of hashes) replacement.set(Buffer.from(h.afterHex,'hex'),h.offset);
  const normalized = stock.slice(0,160);
  for (const r of [{offset:4,size:4}, {offset:72,size:3}, {offset:12,size:4}, {offset:16,size:16}]) normalized.fill(0,r.offset,r.offset+r.size);
  const patch = {schemaVersion:1, firmwareVersion:version, osSize:192, fitSize:160, timestamp:{offset:4,size:4}, patches, hashes,
    normalizedFitSha256:await sha256(normalized), segments:[{name:'code',offset:64,size:64,
      stockSha256:await sha256(stock.slice(64,128)), installedSha256:await sha256(replacement.slice(64,128))}]};
  return {stock,replacement,patch};
}
test('SHA256 known vector', async () => assert.equal(await sha256(new TextEncoder().encode('abc')),'ba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad'));
test('install is bounded, immutable, idempotent and reversible using backup', async () => {
  const {stock,replacement,patch} = await fixture(), before = stock.slice();
  assert.deepEqual(await validateImage(stock,patch),{kind:'stock',version:'1.10'});
  assert.deepEqual(await install(stock,patch),replacement);
  assert.deepEqual(stock,before);
  assert.deepEqual(await install(replacement,patch),replacement);
  assert.deepEqual(await prepareRestore(replacement,stock,patch),stock);
});
test('timestamps and device tail survive installation; restore accepts old uploader timestamp', async () => {
  const {stock,patch} = await fixture(); stock[4] = 33; stock[190] = 71;
  const result = await install(stock,patch);
  assert.equal(result[4],33); assert.equal(result[190],71);
  result[4] = 88;
  assert.deepEqual(await prepareRestore(result,stock,patch),stock);
  result[190] ^= 1;
  await assert.rejects(prepareRestore(result,stock,patch),/does not match/);
});
test('unknown layout, padding, segment, patch and hash bytes reject before modification', async () => {
  const {stock,patch} = await fixture();
  for (const index of [0,40,70,72,12,16,150]) {
    const bad = stock.slice(); bad[index] ^= 1;
    await assert.rejects(validateImage(bad,patch));
    await assert.rejects(install(bad,patch));
  }
  await assert.rejects(validateImage(stock.slice(0,160),patch),/complete/);
  const target = await install(stock,patch);
  await assert.rejects(prepareRestore(target,target,patch),/stock firmware backup/);
});
test('malformed bounds and overlapping deltas reject', async () => {
  const {stock,patch} = await fixture();
  for (const mutate of [p=>p.patches.push(p.patches[0]),p=>p.patches[0].offset=-1,p=>p.patches[0].afterHex='aa',p=>p.segments[0].size=200,p=>p.hashes.pop()]) {
    const bad = structuredClone(patch); mutate(bad);
    await assert.rejects(install(stock,bad));
  }
});
test('local verified 1.10 artifacts match published delta and both known timestamps', async t => {
  const root = new URL('../../',import.meta.url);
  let stock, installed, physical, live;
  try {
    [stock,installed,physical,live] = await Promise.all([
      'analysis/decoder-capture/validated-releases/nanocore-1.10/firmware.bin',
      'analysis/custom-fx/univibe-mxr-1.10/firmware.bin',
      'analysis/custom-fx/test001-session/backup/os-partition.bin',
      'analysis/custom-fx/univibe-mxr-session/deploy/readback.bin'
    ].map(p=>readFile(new URL(p,root))));
  } catch(e) { if(e.code==='ENOENT') return t.skip('Vendor artifacts are intentionally not distributed.'); throw e; }
  const patch = JSON.parse(await readFile(new URL('../patch.json',import.meta.url),'utf8'));
  assert.equal(await sha256(stock),patch.stockFitSha256);
  assert.equal(await sha256(installed),patch.installedFitSha256);
  assert.equal((await validateImage(physical,patch)).kind,'stock');
  assert.equal((await validateImage(live,patch)).kind,'installed');
  const result = await install(physical,patch);
  const expected = Uint8Array.from(live);
  expected.set(physical.subarray(patch.timestamp.offset,patch.timestamp.offset+4),patch.timestamp.offset);
  assert.deepEqual(result,expected);
  assert.deepEqual(await prepareRestore(live,physical,patch),Uint8Array.from(physical));
});

test('automatic detection rejects unknown and ambiguous matches', async () => {
  const {stock,patch} = await fixture();
  assert.equal((await identifyImage(stock,[patch])).version,'1.10');
  await assert.rejects(identifyImage(stock,[patch,patch]),/ambiguous/);
  const bad=stock.slice();bad[0]^=1;
  await assert.rejects(identifyImage(bad,[patch]),/Unknown/);
  await assert.rejects(validateImage(stock,{...patch,firmwareVersion:'1.09'}),/Unsupported/);
});
for (const version of ['1.10','1.11','1.12']) test(`local ${version} full partition detection, install, same-version restore and cross-version rejection`, async t => {
  const root = new URL('../../',import.meta.url);
  const patches=await Promise.all(['patch.json','patch-1.11.json','patch-1.12.json'].map(async file=>JSON.parse(await readFile(new URL('../'+file,import.meta.url),'utf8'))));
  let stock,installed;
  try {
    stock=await readFile(new URL(`analysis/decoder-capture/validated-releases/nanocore-${version}/firmware.bin`,root));
    installed=await readFile(new URL(`analysis/custom-fx/univibe-mxr-${version}/firmware.bin`,root));
  }catch(e){if(e.code==='ENOENT')return t.skip('Vendor images intentionally remain local.');throw e;}
  const patch=patches.find(p=>p.firmwareVersion===version);
  const full=Uint8Array.from({length:patch.osSize},(_,i)=>(i*37)&255);full.set(stock);
  const before=full.slice();
  assert.equal((await identifyImage(full,patches)).version,version);
  const result=await install(full,patch);
  assert.deepEqual(full,before);
  assert.equal(await sha256(result.subarray(0,patch.fitSize)),patch.installedFitSha256);
  assert.deepEqual(result.subarray(0,installed.length),Uint8Array.from(installed));
  assert.deepEqual(result.subarray(patch.fitSize),full.subarray(patch.fitSize));
  assert.deepEqual(result.subarray(0xd0000),full.subarray(0xd0000));
  assert.equal((await identifyImage(result,patches)).kind,'installed');
  assert.deepEqual(await prepareRestore(result,full,patch),full);
  for(const other of patches.filter(p=>p!==patch)){
    await assert.rejects(install(full,other));
    await assert.rejects(prepareRestore(result,full,other));
  }
});

test('all supported versions auto-select without cross-version install or restore', async () => {
  const fixtures=await Promise.all(['1.10','1.11','1.12'].map(fixture));
  const patches=fixtures.map(f=>f.patch);
  for(const {stock,patch} of fixtures){
    const detected=await identifyImage(stock,patches);
    assert.equal(detected.version,patch.firmwareVersion);
    const result=await install(stock,detected.patch);
    assert.equal((await identifyImage(result,patches)).version,patch.firmwareVersion);
    assert.deepEqual(await prepareRestore(result,stock,patch),stock);
    for(const other of fixtures.filter(f=>f.patch!==patch)){
      await assert.rejects(install(stock,other.patch));
      await assert.rejects(prepareRestore(result,other.stock,patch));
    }
  }
});
