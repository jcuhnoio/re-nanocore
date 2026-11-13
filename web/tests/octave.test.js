import test from 'node:test';
import assert from 'node:assert/strict';
import {readFile} from 'node:fs/promises';
import {sha256,validateImage,install,installSelected,identifyImage,prepareRestore} from '../firmware.js';
const hx=b=>Buffer.from(b).toString('hex');
async function fixture(){
 const stock=Uint8Array.from({length:256},(_,i)=>(i*17)&255), out=stock.slice();
 out.set([7,8,9,10],40);out.fill(12,128,192);
 const norm=async(b,n)=>{const x=b.slice(0,n);x.fill(0,4,8);return sha256(x);};
 const patch={schemaVersion:2,firmwareVersion:'1.12',effect:'UNIVIBE_OCTAVE',osSize:256,stockFitSize:128,installedFitSize:192,protectedOffset:224,timestamp:{offset:4,size:4},stockNormalizedSha256:await norm(stock,128),installedNormalizedSha256:await norm(out,192),patches:[{offset:40,beforeHex:hx(stock.slice(40,44)),afterHex:hx(out.slice(40,44))}],append:{offset:128,afterHex:hx(out.slice(128,192))}};
 return{stock,out,patch};
}
test('extended install authenticates complete prefixes, preserves timestamp/tail and restores claimed bytes',async()=>{
 const {stock,out,patch}=await fixture();stock[4]=91;stock.fill(83,128);out[4]=91;out.fill(83,192);
 assert.deepEqual(await install(stock,patch),out);
 assert.deepEqual(await install(out,patch),out);
 assert.deepEqual(await prepareRestore(out,stock,patch),stock);
 for(const i of [0,39,40,80,127,128,170,191]){const bad=out.slice();bad[i]^=1;await assert.rejects(validateImage(bad,patch));}
 const other=stock.slice();other[240]^=1;await assert.rejects(prepareRestore(out,other,patch),/does not match/);
 const badBackup=stock.slice();badBackup[150]^=1;
 // Claimed former tail bytes are unobservable after installation: original
 // browser backup is the source of truth, not an invented inverse patch.
 assert.deepEqual(await prepareRestore(out,badBackup,patch),badBackup);
});
test('extended schema rejects overlap, malformed append and protected-sector writes',async()=>{
 const {stock,patch}=await fixture();
 for(const change of [p=>p.patches.push(p.patches[0]),p=>p.patches[0].offset=4,p=>p.append.offset++,p=>p.append.afterHex='aa',p=>p.installedFitSize=225,p=>p.stockNormalizedSha256='x',p=>p.patches[0].afterHex='aa']){
  const p=structuredClone(patch);change(p);await assert.rejects(install(stock,p));
 }
 const p=structuredClone(patch);p.patches[0].afterHex='00000000';await assert.rejects(install(stock,p),/verification|damaged/);
});
for(const version of ['1.12'])test(`local ${version}: UniVibe ↔ bundle, stock restore, authentic payload, protected sector`,async t=>{
 const root=new URL('../../',import.meta.url);let stock,octave;
 try{stock=await readFile(new URL(`analysis/decoder-capture/validated-releases/nanocore-${version}/firmware.bin`,root));octave=JSON.parse(await readFile(new URL(`../octave-${version}.json`,import.meta.url),'utf8'));}
 catch(e){if(e.code==='ENOENT')return t.skip('Local firmware/port unavailable');throw e;}
 const name=version==='1.10'?'patch.json':`patch-${version}.json`;
 const vibe=JSON.parse(await readFile(new URL('../'+name,import.meta.url),'utf8')), patches=[vibe,octave];
 const original=Uint8Array.from({length:octave.osSize},(_,i)=>(i*37)&255);original.set(stock);original[octave.timestamp.offset]^=1;
 assert.equal((await identifyImage(original,patches)).kind,'stock');
 const v=await installSelected(original,patches,'UNIVIBE');
 await assert.rejects(installSelected(v,patches,'UNIVIBE_OCTAVE'),/backup/);
 const both=await installSelected(v,patches,'UNIVIBE_OCTAVE',original);
 assert.equal((await identifyImage(both,patches)).effect,'UNIVIBE_OCTAVE');
 assert.deepEqual(await installSelected(both,patches,'UNIVIBE_OCTAVE'),both);
 assert.deepEqual(await installSelected(both,patches,'UNIVIBE',original),v);
 assert.deepEqual(await prepareRestore(both,original,octave),original);
 assert.deepEqual(both.slice(octave.installedFitSize),original.slice(octave.installedFitSize));
 assert.deepEqual(both.slice(0xd0000),original.slice(0xd0000));
 const corrupt=both.slice();corrupt[octave.append.offset+99]^=1;await assert.rejects(identifyImage(corrupt,patches));
 const bad=original.slice();bad[original.length-1]^=1;await assert.rejects(installSelected(both,patches,'UNIVIBE',bad),/does not match/);
 assert.equal(both[octave.timestamp.offset],original[octave.timestamp.offset]);
});

test('Octaver schema rejects withdrawn older-version manifests',async()=>{
 const {stock,patch}=await fixture();
 for(const version of ['1.10','1.11'])await assert.rejects(install(stock,{...patch,firmwareVersion:version}),/Unsupported/);
});
for(const version of ['1.10','1.11'])test(`local ${version}: UniVibe supported, Octaver refused without mutation`,async t=>{
 let raw;try{raw=await readFile(new URL(`../../analysis/decoder-capture/validated-releases/nanocore-${version}/firmware.bin`,import.meta.url));}catch(e){if(e.code==='ENOENT')return t.skip('Local vendor image unavailable');throw e;}
 const patch=JSON.parse(await readFile(new URL(version==='1.10'?'../patch.json':'../patch-1.11.json',import.meta.url),'utf8'));
 const stock=new Uint8Array(patch.osSize).fill(255);stock.set(raw);const before=stock.slice();
 const vibe=await installSelected(stock,[patch],'UNIVIBE');
 for(const current of [stock,vibe])await assert.rejects(installSelected(current,[patch],'UNIVIBE_OCTAVE',stock),/requires firmware 1.12/);
 assert.deepEqual(stock,before);assert.deepEqual(await prepareRestore(vibe,stock,patch),stock);
});
