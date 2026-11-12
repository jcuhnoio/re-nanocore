import test from 'node:test';
import assert from 'node:assert/strict';
import {recoveryTarget} from '../storage.js';
test('interrupted upload accepts only its changed sectors',()=>{
 const current=new Uint8Array(868352),target=current.slice();target[65536]=1;
 const pending={current,target};const broken=current.slice();broken.fill(255,65536,131072);
 assert.deepEqual(recoveryTarget(broken,pending),current);
 broken[0]=1;assert.throws(()=>recoveryTarget(broken,pending),/outside/);
});
test('recovery refuses altered final partial sector',()=>{
 const current=new Uint8Array(868352),target=current.slice();target[868351]=1;
 assert.throws(()=>recoveryTarget(target,{current,target}),/outside/);
});
