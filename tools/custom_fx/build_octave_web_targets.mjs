#!/usr/bin/env node
/** Offline release-image exercise of the exact browser delta engine; no USB.
 * BASE_OS supplies device-owned bytes outside the release image. Outputs are
 * local test artifacts, never part of the Pages site. */
import {readFile,mkdir,writeFile} from 'node:fs/promises';
import {installSelected,prepareRestore,identifyImage,sha256} from '../../web/firmware.js';
const [version,basePath,out]=process.argv.slice(2);
if(!['1.10','1.11','1.12'].includes(version)||!basePath||!out)throw Error('Usage: VERSION BASE_OS NEW_OUTPUT_DIR');
const source=new Uint8Array(await readFile(`analysis/decoder-capture/validated-releases/nanocore-${version}/firmware.bin`));
const base=new Uint8Array(await readFile(basePath));if(base.length!==868352)throw Error('Full base OS required');
const stock=base.slice();stock.set(source);
const files=[version==='1.10'?'patch.json':`patch-${version}.json`,`octave-${version}.json`];
const patches=await Promise.all(files.map(async f=>JSON.parse(await readFile('web/'+f,'utf8'))));
const vibe=await installSelected(stock,patches,'UNIVIBE');
const target=await installSelected(vibe,patches,'UNIVIBE_OCTAVE',stock);
const state=await identifyImage(target,patches);
const restored=await prepareRestore(target,stock,state.patch);
if(!restored.every((b,i)=>b===stock[i]))throw Error('Stock restore differs');
const again=await installSelected(target,patches,'UNIVIBE',stock);
if(!again.every((b,i)=>b===vibe[i]))throw Error('Effect switch differs');
if(!target.slice(0xd0000).every((b,i)=>b===base[0xd0000+i]))throw Error('Protected tail differs');
await mkdir(out,{recursive:false});
await writeFile(out+'/stock-os.bin',stock);await writeFile(out+'/univibe-os.bin',vibe);await writeFile(out+'/target-os.bin',target);
const receipt={version,engine:'web/firmware.js',effect:state.effect,base_sha256:await sha256(base),stock_sha256:await sha256(stock),univibe_sha256:await sha256(vibe),target_sha256:await sha256(target),exact_stock_restore:true,exact_effect_switch:true,protected_sector_preserved:true,physical_operations:false};
await writeFile(out+'/receipt.json',JSON.stringify(receipt,null,2)+'\n');console.log(JSON.stringify(receipt,null,2));
