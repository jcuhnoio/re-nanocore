import {WebUSBTransport,RawOS,USB_FILTER} from './dfu.js';
import {validateImage,install,prepareRestore,sha256} from './firmware.js';
import {get,put,recoveryTarget} from './storage.js?v=2';
const $ = id => document.getElementById(id);
let mode='install', busy=false, critical=false, imported=null, backupURL;
const patchPromise=fetch('./patch.json').then(r=>{if(!r.ok)throw Error('Could not load patch');return r.json();});
patchPromise.catch(()=>{});
function status(text,detail=''){ $('status').textContent=text; $('detail').textContent=detail; }
function progress({phase,completed,total}) {
  const stage={preflight:'read',complete:'ready'}[phase]||phase;
  $('progress').value=total?completed/total*100:0;
  for(const item of $('steps').children) item.classList.toggle('active',item.dataset.phase===stage);
  status({read:'Reading your firmware',preflight:'Checking the device again',write:'Uploading — keep USB connected',verify:'Verifying every byte',complete:'Verified. Your NanoCore is restarting.'}[phase]||phase);
}
function linkBackup(bytes) {
  if(backupURL) URL.revokeObjectURL(backupURL);
  backupURL=URL.createObjectURL(new Blob([bytes],{type:'application/octet-stream'}));
  $('backupLink').href=backupURL; $('backupLink').download='nanocore-original-1.10-os.bin'; $('backupLink').hidden=false;
}
async function refresh(){
  const backup=await get('original'); if(backup)linkBackup(backup.bytes);
  $('recovery').hidden=!(await get('pending'))?.active;
}
async function run(fn){
  if(busy)return; busy=true; $('error').hidden=true;
  for(const id of ['primary','restore','importBackup','reconnect','recovery'])$(id).disabled=true;
  try{await fn();}catch(e){$('error').textContent=e.message; $('error').hidden=false;status('Stopped', 'If an upload was interrupted, keep the pedal in Lupgrader mode and use Recover interrupted upload.');}
  finally{critical=false;busy=false;for(const id of ['primary','restore','importBackup','reconnect','recovery'])$(id).disabled=false;await refresh().catch(()=>{});}
}
async function begin(nextMode){
  mode=nextMode;
  if(!navigator.usb || !navigator.requestMIDIAccess || !isSecureContext)throw Error('Open this page in desktop Chrome or Edge over HTTPS (or localhost).');
  if(mode==='restore' && !imported && !(await get('original')))throw Error('Use a backup file first, or use the browser where you installed UniVibe.');
  const devices=await navigator.usb.getDevices();
  const boot=devices.filter(d=>d.vendorId===USB_FILTER.vendorId && d.productId===USB_FILTER.productId);
  if(boot.length===1)return upload(boot[0]);
  status('Connecting to NanoCore','Allow MIDI access, including system-exclusive messages.');
  try {
    const midi=await navigator.requestMIDIAccess({sysex:true});
    const ports=[...midi.outputs.values()].filter(p=>/nanocore/i.test(p.name));
    if(ports.length>1)throw Error('Connect only one NanoCore before continuing.');
    if(ports.length===1){await ports[0].open();ports[0].send([0xf0,0x7d,0x44,0x46,0x55,0x01,0xf7]);await new Promise(r=>setTimeout(r,1200));await ports[0].close();}
  }catch(e){if(e.message.includes('only one'))throw e;}
  $('reconnect').hidden=false;
  status('Connect the bootloader','Click Connect bootloader and choose Livtra Lupgrader. If it is missing, allow MIDI SysEx and try Upload again.');
}
async function upload(device){
  const patch=await patchPromise;
  const transport=await WebUSBTransport.open(device);
  $('connection').textContent='NanoCore · USB connected'; $('reconnect').hidden=true;
  try{
    const dfu=new RawOS(transport,{onProgress:progress});
    const current=await dfu.readPartition();
    let target;
    if(mode==='recover'){
      const pending=await get('pending');
      if(!pending?.active)throw Error('No interrupted upload saved in this browser.');
      await validateImage(pending.current,patch); await validateImage(pending.target,patch);
      target=recoveryTarget(current,pending);
    }else{
      const state=await validateImage(current,patch);
      if(mode==='restore') target=await prepareRestore(current,imported||(await get('original')).bytes,patch);
      else{
        if(state.kind==='stock'){
          status('Saving your original firmware');
          await put('original',{bytes:current,sha256:await sha256(current)});linkBackup(current);
        }
        target=await install(current,patch);
      }
    }
    // Keep the previous recovery record intact until its replacement is durable.
    const pending={active:true,current,target,mode,created:new Date().toISOString()};
    if(mode!=='recover')await put('pending',pending);
    critical=true;
    const receipt=await dfu.program({expectedCurrent:current,target,
      backupSaved:async bytes=>{if(mode==='recover'){await put('recovery-read',{bytes});}else{await put('pending',{...pending,current:bytes});}return true;},
      onVerified:async(_bytes,receipt)=>{await put('receipt',receipt);}
    });
    await put('pending',{...pending,active:false,receipt});
    if($('log'))$('log').textContent=JSON.stringify(receipt,null,2);
    status(mode==='install'?'UniVibe is ready.':mode==='restore'?'Original firmware restored.':'Previous firmware recovered.',mode==='install'?'Find UNIVIBE in MOD, in place of Velvet Vibrato. Controls: speed, depth, level and chorus/vibrato.':'Every byte was verified. Your NanoCore is restarting.');
    $('connection').textContent='Upload verified';
  }finally{await transport.close();}
}
$('primary').onclick=()=>run(()=>begin('install'));
$('restore').onclick=()=>run(()=>begin('restore'));
$('recovery').onclick=()=>run(()=>begin('recover'));
$('reconnect').onclick=()=>run(async()=>upload(await navigator.usb.requestDevice({filters:[USB_FILTER]})));
$('importBackup').onclick=()=>$('backupFile').click();
$('backupFile').onchange=()=>run(async()=>{
  const file=$('backupFile').files[0];if(!file)return;
  const bytes=new Uint8Array(await file.arrayBuffer());
  if((await validateImage(bytes,await patchPromise)).kind!=='stock')throw Error('Choose an original stock 1.10 OS backup.');
  imported=bytes;status('Backup file ready','Click Restore original firmware to restore this backup.');
});
addEventListener('beforeunload',e=>{if(critical){e.preventDefault();e.returnValue='';}});
refresh().catch(e=>{$('error').hidden=false;$('error').textContent=`Local backup storage unavailable: ${e.message}`;});
if(!navigator.usb){status('Desktop Chrome or Edge required','Open this page in a browser with WebUSB support.');$('primary').disabled=true;}
