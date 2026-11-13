"""1.10 inline-pitch ABI bridge. Retains native FX2 state and appends custom DSP.

Derived from retained REA exports and vendor disassembly, not a hardware test.
Only the two audited FX2 allocations/callers are expanded/intercepted.
"""
import struct

FAMILY_BYTES=0x60f4
STATE_OFFSET=0x6100
ALLOCATION_BYTES=0x16100

def port_source(source):
    if 'static State* stateFor' in source:
        source=source.replace('auto* s=*static_cast<State**>(nativePitch);',
            'auto* s=reinterpret_cast<State*>(static_cast<unsigned char*>(nativePitch)+0x6100);')
        start=source.index('extern "C" int nc_octave_pitch_init(')
        end=source.index('extern "C" void nc_octave_pitch_set_shift',start)
        source=source[:start]+'''// Both audited allocation sites reserve native bytes plus an aligned 64 KiB tail.
extern "C" void nc_octave_family_init(float rate,void* family,void* fx1,void* enabled) {
    reinterpret_cast<void(*)(float,void*,void*,void*)>(0x40068b2au)(rate,family,fx1,enabled);
    if(!family)return;
    auto* s=new(static_cast<unsigned char*>(family)+0x6100)State{};
    // Match the native constructor's fallback for invalid sample rates.
    if(rate!=44100.f && rate!=48000.f)rate=44100.f;
    s->sampleRate=rate;s->core.prepare(rate);controls(s,nullptr);s->core.reset();
    s->magic=Magic;++nc_octave_stats.initCount;
}
extern "C" __attribute__((naked)) void nc_octave_native_reset(void*) {
    __asm__ volatile("beqz a0,1f\\n lhu a2,22(a0)\\n li t0,0x40068f00\\n jr t0\\n 1: ret\\n");
}
extern "C" void nc_octave_pitch_reset(void* family) {
    nc_octave_native_reset(family);
    if(auto* s=stateFor(family)){s->core.reset();++s->resets;}
}
''' +source[end:]
        source=source.replace('stateFor(bytes+8)','stateFor(bytes)')
        source=source.replace('0xe40','0x60f0')
        source=source.replace('addi sp,sp,-688','addi sp,sp,-176').replace('sw s1,676(sp)','sw s1,164(sp)')
    # Telemetry state addresses are computed from families: 1.10 has no ring pointers.
    source=source.replace('word(0x3004f728)','(word(0x3004f72c)?word(0x3004f72c)+0x6100:0)')
    source=source.replace('word(0x30051808)','(word(0x3005180c)?word(0x3005180c)+0x6100:0)')
    return source

def patches(image,symbols):
    from patch_image import extract_fit
    from octave_hooks import jal,clui
    seg=next(s for s in extract_fit(image)['segments'] if s['load_address']==0x40000000)
    result=[]
    def add(address,before,after,description):
        before=bytes.fromhex(before);offset=seg['offset']+address-0x40000000
        if image[offset:offset+len(before)]!=before:raise ValueError(f'Unexpected 1.10 hook bytes at {address:#x}')
        if len(before)!=len(after):raise ValueError('Hook changes size')
        result.append(dict(address=hex(address),offset=offset,expected_hex=before.hex(),replacement_hex=after.hex(),description=description))
    def target(name):
        v=symbols[name];return int(v,0) if isinstance(v,str) else v
    for address,before,name in [(0x4000bace,'914763e33707','nc_octave_setter_gate'),
            (0x400691c8,'717126d3','nc_octave_dispatch'),
            (0x40068efa,'39c503566501','nc_octave_pitch_reset')]:
        add(address,before,jal(address,target(name))+b'\x01\x00'*((len(bytes.fromhex(before))-4)//2),name)
    for address,before in [(0x4000e1e2,'efa09514'),(0x4000e1f8,'efa03513')]:
        # Preserve the original caller's RA return; regular entry hooks use x0.
        word=int.from_bytes(jal(address,target('nc_octave_family_init')),'little')|(1<<7)
        add(address,before,struct.pack('<I',word),'Initialize native FX2 and appended custom state')
    for address in (0x4000dfa6,0x4000e05c):
        add(address,'19651305450f',clui(10,0x16)+struct.pack('<I',0x10050513),
            'Expand FX2 allocation 0x60f4 -> 0x16100; native allocation checks retained')
    return result
