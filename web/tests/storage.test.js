import test from 'node:test';
import assert from 'node:assert/strict';
import {equal,verifySaved} from '../storage.js';
test('verified DFU receipt stores byte count without treating it as a byte array',()=>{
 const receipt={bytes:868352,exact_match:true,input_sha256:'input',output_sha256:'output'};
 assert.deepEqual(verifySaved(receipt,structuredClone(receipt)),receipt);
 assert.throws(()=>verifySaved(receipt,{...receipt,bytes:0}),/verification failed/);
});
test('snapshot roundtrip still checks every byte and rejects missing or wrong types',()=>{
 const snapshot={current:new Uint8Array([1,2]),target:new Uint8Array([3,4]),bytes:new Uint8Array([5,6])};
 assert.deepEqual(verifySaved(snapshot,structuredClone(snapshot)),snapshot);
 for(const field of ['current','target','bytes']){
  const changed=structuredClone(snapshot);changed[field][1]^=1;
  assert.throws(()=>verifySaved(snapshot,changed),/verification failed/);
  assert.throws(()=>verifySaved(snapshot,{...snapshot,[field]:undefined}),/verification failed/);
  assert.throws(()=>verifySaved(snapshot,{...snapshot,[field]:2}),/verification failed/);
 }
 assert.equal(equal(868352,868352),false);
 assert.equal(equal(undefined,undefined),false);
});
