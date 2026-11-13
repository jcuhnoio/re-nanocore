/** Exact-build firmware delta engine. No USB access and no executable vendor image.
 * The trusted patch manifest is generated offline from verified FIT images.
 * Exact segment SHA-256 authenticates the corresponding known MD5/CRC values;
 * we do not pretend MD5/CRC alone authenticate an unknown firmware build.
 */
function bytes(value) {
  if (value instanceof Uint8Array) return new Uint8Array(value.buffer, value.byteOffset, value.byteLength);
  if (value instanceof ArrayBuffer) return new Uint8Array(value);
  throw new Error('Expected firmware bytes.');
}
function hex(value) {
  if (typeof value !== 'string' || !/^(?:[0-9a-f]{2})+$/i.test(value)) throw new Error('Invalid patch hex.');
  return Uint8Array.from(value.match(/../g), n => parseInt(n, 16));
}
function equal(a, b) { return a.length === b.length && a.every((v, i) => v === b[i]); }
export async function sha256(value) {
  const result = await crypto.subtle.digest('SHA-256', bytes(value));
  return Array.from(new Uint8Array(result), b => b.toString(16).padStart(2, '0')).join('');
}
function schema(p) {
  if (p?.schemaVersion !== 1 || !['1.10','1.11','1.12'].includes(p.firmwareVersion) ||
      !Number.isSafeInteger(p.osSize) || !Number.isSafeInteger(p.fitSize) ||
      p.fitSize <= 0 || p.fitSize > p.osSize || !p.segments?.length ||
      !p.patches?.length || !p.hashes?.length) throw new Error('Unsupported patch manifest.');
  const ranges = [];
  const range = (offset, size) => {
    if (!Number.isSafeInteger(offset) || !Number.isSafeInteger(size) || offset < 0 || size <= 0 || offset + size > p.fitSize)
      throw new Error('Patch range outside FIT.');
    if (ranges.some(r => offset < r.offset + r.size && r.offset < offset + size)) throw new Error('Overlapping patch ranges.');
    ranges.push({offset, size});
  };
  if (p.timestamp?.size !== 4) throw new Error('Invalid timestamp field.');
  range(p.timestamp.offset, 4);
  for (const entry of [...p.patches, ...p.hashes]) {
    const a = hex(entry.beforeHex), b = hex(entry.afterHex);
    if (a.length !== b.length) throw new Error('Patch changes image size.');
    range(entry.offset, a.length);
  }
  const segments = [];
  for (const s of p.segments) {
    if (!Number.isSafeInteger(s.offset) || !Number.isSafeInteger(s.size) || s.offset < 0 || s.size <= 0 || s.offset + s.size > p.fitSize ||
        segments.some(t => s.offset < t.offset + t.size && t.offset < s.offset + s.size)) throw new Error('Invalid segment bounds.');
    segments.push(s);
    const algorithms = p.hashes.filter(h => h.segment === s.name).map(h => h.algorithm).sort();
    if (algorithms.join(',') !== 'crc32,md5') throw new Error('Missing segment integrity fields.');
  }
  for (const e of p.patches) if (!segments.some(s => e.offset >= s.offset && e.offset + e.beforeHex.length / 2 <= s.offset + s.size))
    throw new Error('Code patch outside segments.');
  for (const r of [p.timestamp, ...p.hashes.map(h => ({offset:h.offset, size:h.beforeHex.length/2}))])
    if (segments.some(s => r.offset < s.offset + s.size && s.offset < r.offset + r.size)) throw new Error('Header field overlaps segment.');
  return ranges;
}
// Extended FITs claim part of the old post-FIT space. Authenticate the complete
// original/installed prefixes independently; never normalize that new code out.
function extendedSchema(p) {
  const integer=Number.isSafeInteger, digest=s=>typeof s==='string' && /^[0-9a-f]{64}$/.test(s);
  if(p?.schemaVersion!==2 || p.firmwareVersion!=='1.12' || p.effect!=='UNIVIBE_OCTAVE' ||
     ![p.osSize,p.stockFitSize,p.installedFitSize,p.protectedOffset].every(integer) ||
     !(0<p.stockFitSize && p.stockFitSize<p.installedFitSize && p.installedFitSize<=p.protectedOffset && p.protectedOffset<=p.osSize) ||
     !digest(p.stockNormalizedSha256) || !digest(p.installedNormalizedSha256) ||
     p.timestamp?.size!==4 || !integer(p.timestamp.offset) || p.timestamp.offset<0 || p.timestamp.offset+4>p.stockFitSize ||
     !Array.isArray(p.patches) || !p.patches.length || p.append?.offset!==p.stockFitSize)
    throw Error('Unsupported extended patch manifest.');
  const ranges=[p.timestamp];
  for(const e of p.patches){
    const a=hex(e.beforeHex),b=hex(e.afterHex);
    if(a.length!==b.length || !integer(e.offset) || e.offset<0 || e.offset+a.length>p.stockFitSize ||
       ranges.some(r=>e.offset<r.offset+r.size && r.offset<e.offset+a.length))throw Error('Invalid or overlapping extended patch.');
    ranges.push({offset:e.offset,size:a.length});
  }
  if(hex(p.append.afterHex).length!==p.installedFitSize-p.stockFitSize)throw Error('Invalid appended payload.');
}
async function normalizedPrefix(image,size,timestamp){
  const prefix=image.slice(0,size);prefix.fill(0,timestamp.offset,timestamp.offset+timestamp.size);
  return sha256(prefix);
}
/** Throws for any unrecognized image, mixed patch, corrupt hash, or wrong size.
 * Accepts complete OS partitions only; timestamp and post-FIT tail may vary.
 */
export async function validateImage(value, patch) {
  if(patch?.schemaVersion===2){
    extendedSchema(patch);const image=bytes(value);
    if(image.length!==patch.osSize)throw Error(`Expected a complete ${patch.osSize}-byte OS partition.`);
    for(const kind of ['stock','installed'])
      if(await normalizedPrefix(image,patch[kind+'FitSize'],patch.timestamp)===patch[kind+'NormalizedSha256'])
        return {kind,version:patch.firmwareVersion};
    throw Error('Unknown or damaged extended firmware; nothing will be written.');
  }
  const image = bytes(value), ranges = schema(patch);
  if (image.length !== patch.osSize) throw new Error(`Expected a complete ${patch.osSize}-byte OS partition.`);
  const normalized = image.slice(0, patch.fitSize);
  for (const r of ranges) normalized.fill(0, r.offset, r.offset + r.size);
  if (await sha256(normalized) !== patch.normalizedFitSha256) throw new Error('Unknown firmware layout or build; nothing will be written.');
  const digests = await Promise.all(patch.segments.map(s => sha256(image.subarray(s.offset, s.offset+s.size))));
  for (const kind of ['stock', 'installed']) {
    const field = kind === 'stock' ? 'beforeHex' : 'afterHex';
    if (patch.segments.every((s, i) => digests[i] === s[`${kind}Sha256`]) &&
        [...patch.patches, ...patch.hashes].every(e => equal(image.subarray(e.offset, e.offset + e[field].length / 2), hex(e[field]))))
      return {kind, version: patch.firmwareVersion};
  }
  throw new Error('Unknown or damaged firmware; segment identity or FIT integrity does not match.');
}
/** Creates a separate buffer; preserves the caller's timestamp and complete OS tail. */
export async function install(value, patch) {
  const image = bytes(value), state = await validateImage(image, patch), output = image.slice();
  if (state.kind === 'installed') return output;
  for (const entry of [...patch.patches, ...(patch.hashes||[]), ...(patch.append?[patch.append]:[])]) output.set(hex(entry.afterHex), entry.offset);
  if ((await validateImage(output, patch)).kind !== 'installed') throw new Error('Patched firmware verification failed.');
  return output;
}
/** Restore only a stock backup matching the current known installation or stock.
 * FIT timestamps may differ because the previous offline uploader used the release
 * timestamp. All other bytes (including the device-owned tail) must match.
 * Interrupted-write recovery is deliberately outside this function.
 */
export async function prepareRestore(current, backup, patch) {
  const original = bytes(backup), live = bytes(current);
  if ((await validateImage(original, patch)).kind !== 'stock') throw new Error('Restore requires a stock firmware backup.');
  const state = await validateImage(live, patch);
  const expected = state.kind === 'installed' ? await install(original, patch) : original.slice();
  const t = patch.timestamp;
  expected.set(live.subarray(t.offset, t.offset + t.size), t.offset);
  if (!equal(expected, live)) throw new Error('Backup does not match this device’s current OS contents.');
  return original.slice();
}

/** Select by authenticated image contents, never a user-supplied version string. */
export async function identifyImage(value, patches) {
  const matches = [];
  for (const patch of patches) {
    try { matches.push({...(await validateImage(value, patch)), patch, effect:patch.effect||'UNIVIBE'}); }
    catch { /* Try another exact build; no writes happen during detection. */ }
  }
  // The same authenticated stock image may be the source of distinct effects.
  // Repeated manifests or conflicting versions/install identities stay errors.
  if(matches.length>1 && matches.every(m=>m.kind==='stock' && m.version===matches[0].version) &&
     new Set(matches.map(m=>m.effect)).size===matches.length)return matches.find(m=>m.effect==='UNIVIBE')||matches[0];
  if (matches.length !== 1) throw new Error('Unknown, damaged or ambiguous firmware. Supported exact builds: 1.10, 1.11 and 1.12; nothing will be written.');
  return matches[0];
}

/** Switching effects first reconstructs the exact saved stock OS, including any
 * tail bytes claimed by an extended FIT. Never synthesize a stock backup. */
export async function installSelected(current,patches,effect,originalBackup){
  const state=await identifyImage(current,patches);
  if(effect==='UNIVIBE_OCTAVE' && state.version!=='1.12')throw Error('The experimental Octaver requires firmware 1.12. Nothing was written. UniVibe alone supports this version.');
  const candidates=patches.filter(p=>p.firmwareVersion===state.version && (p.effect||'UNIVIBE')===effect);
  if(candidates.length!==1)throw Error('Selected effect is unavailable for this exact firmware.');
  if(state.kind==='installed' && state.effect===effect)return bytes(current).slice();
  let stock=current;
  if(state.kind==='installed'){
    if(!originalBackup)throw Error('Switching effects requires your original stock OS backup. Use a backup file or the browser where you installed.');
    stock=await prepareRestore(current,originalBackup,state.patch);
    stock.set(bytes(current).subarray(state.patch.timestamp.offset,state.patch.timestamp.offset+4),state.patch.timestamp.offset);
  }
  return install(stock,candidates[0]);
}
