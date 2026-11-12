// Run with the local web server on :8765 and retained release images available.
const {chromium}=require(process.env.PLAYWRIGHT_MODULE || 'playwright-core');
const fs=require('fs');
fs.mkdirSync('analysis/web-installer',{recursive:true});
(async()=>{
const browser=await chromium.launch({executablePath:process.env.CHROME_PATH || '/Applications/Google Chrome.app/Contents/MacOS/Google Chrome',headless:true});
try {
const context=await browser.newContext(); const page=await context.newPage();
const errors=[];page.on('pageerror',e=>errors.push(e.message));
const stock={};
for(const version of ['1.10','1.11','1.12']){
 const image=fs.readFileSync(`analysis/decoder-capture/validated-releases/nanocore-${version}/firmware.bin`);
 stock[version]=Buffer.alloc(868352,0xff);image.copy(stock[version]);
}
await page.route('**/fixture-*.bin',r=>{
 const version=new URL(r.request().url()).pathname.match(/fixture-(.*)\.bin/)[1];
 return r.fulfill({body:stock[version]});
});
await page.route('**/dfu.js',r=>r.fulfill({contentType:'application/javascript',body:`
export const USB_FILTER={vendorId:0x33c3,productId:0x6678};
export class WebUSBTransport {static async open(){return {close:async()=>{}}}}
export class RawOS {
 constructor(t,{onProgress}){this.onProgress=onProgress;}
 async readPartition(){return window.live;}
 async program(o){if(await o.backupSaved(window.live)!==true)throw Error('No backup');if(window.failUpload){window.failUpload=false;window.live.fill(255,0,65536);throw Error('Simulated disconnect');}window.live=o.target.slice();const receipt={input_sha256:'test-input',output_sha256:'test-output',bytes:window.live.length,erased_os_relative_sectors:[0],exact_match:true};await o.onVerified(window.live,receipt);return receipt;}
}` }));
await page.addInitScript(()=>{
Object.defineProperty(navigator,'usb',{value:{getDevices:async()=>[{vendorId:0x33c3,productId:0x6678}]}});
Object.defineProperty(navigator,'requestMIDIAccess',{value:async()=>({outputs:new Map()})});
});
await page.goto('http://localhost:8765');
for(const version of ['1.10','1.11','1.12']){
 await page.evaluate(async version=>{window.live=new Uint8Array(await(await fetch(`./fixture-${version}.bin`)).arrayBuffer());},version);
 await page.click('#primary');await page.getByText('UniVibe is ready.',{exact:true}).waitFor();
 if(!await page.locator('#backupLink').isVisible())throw Error('Missing backup');
 if(!((await page.locator('#backupLink').getAttribute('download')).includes(version)))throw Error('Wrong backup filename');
 await page.click('#restore');await page.getByText('Original firmware restored.',{exact:true}).waitFor();
 const match=await page.evaluate(async version=>{const original=new Uint8Array(await(await fetch(`./fixture-${version}.bin`)).arrayBuffer());return original.every((b,i)=>b===window.live[i]);},version);
 if(!match)throw Error('Restore mismatch '+version);
 await page.evaluate(()=>window.failUpload=true);await page.click('#primary');await page.locator('#error').waitFor();await page.locator('#recovery').waitFor();await page.click('#recovery');await page.getByText('Previous firmware recovered.',{exact:true}).waitFor();
}
// Version-specific backups survive a later firmware version being installed.
const backups=await page.evaluate(async()=>{const {get}=await import('./storage.js?v=2');return Promise.all(['1.10','1.11','1.12'].map(async v=>(await get('original-'+v))?.version));});
if(backups.join(',')!=='1.10,1.11,1.12')throw Error('Version backup lost');
await page.setViewportSize({width:1440,height:1100});await page.screenshot({path:'analysis/web-installer/desktop.png',fullPage:true});
await page.setViewportSize({width:360,height:800});
if(await page.evaluate(()=>document.documentElement.scrollWidth>innerWidth))throw Error('Mobile overflow');
await page.screenshot({path:'analysis/web-installer/mobile.png',fullPage:true});
if(errors.length)throw Error(errors.join('\n'));
console.log('Chrome: all three versions install, backup, exact restore and interrupted recovery; independent backups; desktop/mobile; zero runtime errors');
} finally {await browser.close();}
})().catch(error=>{console.error(error);process.exitCode=1;});
