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
  if (p?.schemaVersion !== 1 || p.firmwareVersion !== '1.10' ||
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
/** Throws for any unrecognized image, mixed patch, corrupt hash, or wrong size.
 * Accepts complete OS partitions only; timestamp and post-FIT tail may vary.
 */
export async function validateImage(value, patch) {
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
  for (const entry of [...patch.patches, ...patch.hashes]) output.set(hex(entry.afterHex), entry.offset);
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
