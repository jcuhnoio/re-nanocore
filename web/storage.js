// Backups never leave this origin. A read-after-write check gates every erase.
export const equal = (a,b) => a instanceof Uint8Array && b instanceof Uint8Array && a.length === b.length && a.every((v,i) => v === b[i]);
export function verifySaved(value, saved) {
  // Snapshot bytes are a Uint8Array; a DFU receipt's bytes field is a count.
  for (const field of ['current','target','bytes']) {
    if (value[field] === undefined) continue;
    const expected = value[field], actual = saved?.[field];
    const matches = expected instanceof Uint8Array ? equal(expected,actual)
      : field === 'bytes' && Number.isSafeInteger(expected) && expected === actual;
    if (!matches) throw new Error('Browser storage verification failed; operation stopped.');
  }
  return saved;
}
export async function database() {
  return new Promise((resolve,reject) => {
    const r = indexedDB.open('nanocore-univibe',1);
    r.onupgradeneeded = () => r.result.createObjectStore('snapshots');
    r.onsuccess = () => resolve(r.result);
    r.onerror = () => reject(r.error);
  });
}
export async function get(key) {
  const db = await database();
  try { return await new Promise((resolve,reject) => {
    const r = db.transaction('snapshots').objectStore('snapshots').get(key);
    r.onsuccess = () => resolve(r.result); r.onerror = () => reject(r.error);
  }); } finally { db.close(); }
}
export async function put(key,value) {
  const db = await database();
  try { await new Promise((resolve,reject) => {
    const tx = db.transaction('snapshots','readwrite');
    tx.objectStore('snapshots').put(value,key);
    tx.oncomplete = resolve; tx.onerror = () => reject(tx.error); tx.onabort = () => reject(tx.error);
  }); } finally { db.close(); }
  const saved = await get(key);
  return verifySaved(value, saved);
}
export function recoveryTarget(current, pending, size = 868352, sector = 65536) {
  if (![current,pending?.current,pending?.target].every(b => b instanceof Uint8Array && b.length === size)) throw new Error('No complete interrupted-upload backup.');
  for (let offset=0;offset<size;offset+=sector) {
    const before=pending.current.subarray(offset,offset+sector), after=pending.target.subarray(offset,offset+sector);
    if ((equal(before,after) || offset+sector>size) && !equal(current.subarray(offset,offset+sector),before)) throw new Error('Device differs outside the interrupted upload; recovery refused.');
  }
  return pending.current.slice();
}
