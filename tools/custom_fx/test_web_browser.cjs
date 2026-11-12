const {chromium}=require(process.env.PLAYWRIGHT_MODULE || 'playwright-core');
const fs=require('fs');
fs.mkdirSync('analysis/web-installer',{recursive:true});
(async()=>{
const browser=await chromium.launch({executablePath:process.env.CHROME_PATH || '/Applications/Google Chrome.app/Contents/MacOS/Google Chrome',headless:true});
const context=await browser.newContext(); const page=await context.newPage();
const errors=[];page.on('pageerror',e=>errors.push(e.message));
const stock=fs.readFileSync('analysis/custom-fx/test001-session/backup/os-partition.bin');
await page.route('**/fixture.bin',r=>r.fulfill({body:stock}));
await page.route('**/dfu.js',r=>r.fulfill({contentType:'application/javascript',body:`
export const USB_FILTER={vendorId:0x33c3,productId:0x6678};
export class WebUSBTransport {static async open(){return {close:async()=>{}}}}
export class RawOS {
 constructor(t,{onProgress}){this.onProgress=onProgress;}
 async readPartition(){return window.live ||= new Uint8Array(await (await fetch('./fixture.bin')).arrayBuffer());}
 async program(o){if(await o.backupSaved(window.live)!==true)throw Error('No backup');if(window.failUpload){window.failUpload=false;window.live.fill(255,0,65536);throw Error('Simulated disconnect');}window.live=o.target.slice();const receipt={exact_match:true};await o.onVerified(window.live,receipt);return receipt;}
}` }));
await page.addInitScript(()=>{
Object.defineProperty(navigator,'usb',{value:{getDevices:async()=>[{vendorId:0x33c3,productId:0x6678}]}});
Object.defineProperty(navigator,'requestMIDIAccess',{value:async()=>({outputs:new Map()})});
});
await page.goto('http://localhost:8765');await page.click('#primary');await page.getByText('UniVibe is ready.',{exact:true}).waitFor();
if(!await page.locator('#backupLink').isVisible())throw Error('Missing backup');
await page.click('#restore');await page.getByText('Original firmware restored.',{exact:true}).waitFor();
const match=await page.evaluate(async()=>{const original=new Uint8Array(await(await fetch('./fixture.bin')).arrayBuffer());return original.every((b,i)=>b===window.live[i]);});
if(!match)throw Error('Restore mismatch');
await page.evaluate(()=>window.failUpload=true);await page.click('#primary');await page.locator('#error').waitFor();await page.locator('#recovery').waitFor();await page.click('#recovery');await page.getByText('Previous firmware recovered.',{exact:true}).waitFor();
await page.setViewportSize({width:1440,height:1100});await page.screenshot({path:'analysis/web-installer/desktop.png',fullPage:true});
await page.setViewportSize({width:360,height:800});
if(await page.evaluate(()=>document.documentElement.scrollWidth>innerWidth))throw Error('Mobile overflow');
await page.screenshot({path:'analysis/web-installer/mobile.png',fullPage:true});
if(errors.length)throw Error(errors.join('\n'));
console.log('Chrome: mocked install, saved backup, exact restore, interrupted upload recovery; desktop/mobile layout; zero runtime errors');await browser.close();
})();
