import {WebUSBTransport,RawOS,USB_FILTER} from './dfu.js';
import {installSelected,prepareRestore,sha256,identifyImage} from './firmware.js?v=5';
import {get,put,recoveryTarget} from './storage.js?v=2';
const $ = id => document.getElementById(id);
let mode='install', busy=false, critical=false, imported=null, backupURL;
const patchPromise=Promise.all(['patch.json','patch-1.11.json','patch-1.12.json','octave-1.12.json'].map(path=>fetch('./'+path).then(r=>{if(!r.ok)throw Error('Could not load firmware patches; reload and try again.');return r.json();})));
patchPromise.catch(()=>{});
const supportsUSB=!!navigator.usb && !!navigator.requestMIDIAccess && isSecureContext;
function requireAudioDisconnected(){
  if(!$('audioDisconnected').checked)throw Error('Physically unplug headphones and audio output cables, close ToneCommand, then check the confirmation before continuing.');
}
function updateControls(){
  for(const id of ['primary','restore','reconnect','recovery'])$(id).disabled=busy || !supportsUSB || !$('audioDisconnected').checked;
  for(const id of ['importBackup','effectSelect','audioDisconnected'])$(id).disabled=busy;
}
function selectionChanged(){
  const octave=$('effectSelect').value==='UNIVIBE_OCTAVE';
  $('primary').textContent=octave?'Upload UniVibe + Octaver ↗':'Upload UniVibe ↗';
  $('selectionDetail').textContent=octave?'Requires firmware 1.12. Installs UNIVIBE in place of Velvet Vibrato and OCTAVE in place of the stock Octaver/PITCH effect. Presets using either slot will use the new effect.':'Replaces Velvet Vibrato (MOD 10) with UNIVIBE. Other effect slots stay as they are.';
  $('octaveWarning').hidden=!octave;
}
function status(text,detail=''){ $('status').textContent=text; $('detail').textContent=detail; }
function progress({phase,completed,total}) {
  const stage={preflight:'read',complete:'ready'}[phase]||phase;
  $('progress').value=total?completed/total*100:0;
  for(const item of $('steps').children) item.classList.toggle('active',item.dataset.phase===stage);
  status({read:'Reading your firmware',preflight:'Checking the device again',write:'Uploading — keep USB connected',verify:'Verifying every byte',complete:'Verified. Your NanoCore is restarting.'}[phase]||phase);
}
function linkBackup(bytes,version) {
  if(backupURL) URL.revokeObjectURL(backupURL);
  backupURL=URL.createObjectURL(new Blob([bytes],{type:'application/octet-stream'}));
  $('backupLink').href=backupURL; $('backupLink').download=`nanocore-original-${version}-os.bin`; $('backupLink').hidden=false;
}
async function refresh(){
  const backup=await get('original'); if(backup){
    const state=await identifyImage(backup.bytes,await patchPromise);
    if(state.kind!=='stock')throw Error('Saved original backup is not stock firmware.');
    if(!await get('original-'+state.version))await put('original-'+state.version,{...backup,version:state.version});
    linkBackup(backup.bytes,state.version);
  }
  $('recovery').hidden=!(await get('pending'))?.active;
}
async function run(fn){
  if(busy)return; busy=true; $('error').hidden=true;
  updateControls();
  try{await fn();}catch(e){$('error').textContent=e.message; $('error').hidden=false;status('Stopped', critical?'If an upload was interrupted, keep the pedal in Lupgrader mode and use Recover interrupted upload.':'No upload completed. Check the message above before continuing.');}
  finally{critical=false;busy=false;updateControls();await refresh().catch(()=>{});}
}
async function begin(nextMode){
  requireAudioDisconnected();
  mode=nextMode;
  if(!supportsUSB)throw Error('Open this page in desktop Chrome or Edge over HTTPS (or localhost).');
  if(mode==='restore' && !imported && !(await get('original')))throw Error('Use a backup file first, or use the browser where you installed these effects.');
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
  requireAudioDisconnected();
  const requestedEffect=$('effectSelect').value;
  const patches=await patchPromise;
  const transport=await WebUSBTransport.open(device);
  $('connection').textContent='NanoCore · USB connected'; $('reconnect').hidden=true;
  try{
    const dfu=new RawOS(transport,{onProgress:progress});
    const current=await dfu.readPartition();
    let target,patch,version,effect;
    if(mode==='recover'){
      const pending=await get('pending');
      if(!pending?.active)throw Error('No interrupted upload saved in this browser.');
      ({patch,version}=await identifyImage(pending.current,patches));
      const recovered=await identifyImage(pending.target,patches);
      if(recovered.version!==version)throw Error('Saved recovery firmware version does not match.');
      effect=recovered.effect;
      target=recoveryTarget(current,pending);
    }else{
      const state=await identifyImage(current,patches);
      ({patch,version,effect}=state);
      if(mode==='restore'){
        const backup=imported||(await get('original-'+version))?.bytes||(await get('original'))?.bytes;
        if(!backup)throw Error(`No original ${version} backup saved. Use a matching backup file.`);
        target=await prepareRestore(current,backup,patch);
      }
      else{
        if(state.kind==='stock'){
          status('Saving your original firmware');
          // Migrate legacy backups before updating the latest-backup pointer.
          await refresh();
          const backup={bytes:current,sha256:await sha256(current),version};
          await put('original-'+version,backup);await put('original',backup);linkBackup(current,version);
        }
        const backup=imported||(await get('original-'+version))?.bytes||(await get('original'))?.bytes;
        target=await installSelected(current,patches,requestedEffect,backup);
        effect=requestedEffect;
      }
    }
    // Keep the previous recovery record intact until its replacement is durable.
    const pending={active:true,current,target,mode,version,effect,created:new Date().toISOString()};
    if(mode!=='recover')await put('pending',pending);
    critical=true;
    const receipt=await dfu.program({expectedCurrent:current,target,
      backupSaved:async bytes=>{if(mode==='recover'){await put('recovery-read',{bytes});}else{await put('pending',{...pending,current:bytes});}return true;},
      onVerified:async(_bytes,receipt)=>{await put('receipt',receipt);}
    });
    await put('pending',{...pending,active:false,receipt});
    if($('log'))$('log').textContent=JSON.stringify(receipt,null,2);
    const octave=effect==='UNIVIBE_OCTAVE';
    status(mode==='install'?(octave?'UniVibe + Octaver are ready.':'UniVibe is ready.'):mode==='restore'?'Original firmware restored.':'Previous firmware recovered.',
      mode==='install'?(octave?'Find UNIVIBE in MOD and OCTAVE in the stock Octaver slot. Keep ToneCommand closed while using OCTAVE. Wait for the pedal to restart before reconnecting audio at low volume.':'Find UNIVIBE in MOD, in place of Velvet Vibrato. Controls: speed, depth, level and chorus/vibrato. Wait for the pedal to restart before reconnecting audio at low volume.'):'Every byte was verified. Wait for the pedal to restart before reconnecting audio at low volume.');
    // A completed update may be followed by listening; require a fresh check next time.
    $('audioDisconnected').checked=false;
    $('connection').textContent=`Firmware ${version} · verified`;
  }finally{await transport.close();}
}
$('primary').onclick=()=>run(()=>begin('install'));
$('restore').onclick=()=>run(()=>begin('restore'));
$('recovery').onclick=()=>run(()=>begin('recover'));
$('reconnect').onclick=()=>run(async()=>{requireAudioDisconnected();await upload(await navigator.usb.requestDevice({filters:[USB_FILTER]}));});
$('importBackup').onclick=()=>$('backupFile').click();
$('backupFile').onchange=()=>run(async()=>{
  const file=$('backupFile').files[0];if(!file)return;
  const bytes=new Uint8Array(await file.arrayBuffer());
  if((await identifyImage(bytes,await patchPromise)).kind!=='stock')throw Error('Choose an original stock 1.10, 1.11 or 1.12 OS backup.');
  imported=bytes;status('Backup file ready','Use Restore original, or select effects and upload to switch from a known installation with this matching backup.');
});
$('effectSelect').onchange=selectionChanged;
$('audioDisconnected').onchange=updateControls;
selectionChanged();updateControls();
addEventListener('beforeunload',e=>{if(critical){e.preventDefault();e.returnValue='';}});
refresh().catch(e=>{$('error').hidden=false;$('error').textContent=`Local backup storage unavailable: ${e.message}`;});
if(!supportsUSB)status('Desktop Chrome or Edge required','Open this page in a browser with WebUSB and MIDI support over HTTPS.');
