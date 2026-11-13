"""Run the same retained native-code checks against an exact older profile."""
import json,re
from pathlib import Path
from octave_versions import profile,port_source

def run_ported(path,build,namespace):
    if namespace.get('_OCTAVE_PORTED'):return
    version=json.loads((Path(build)/'build.json').read_text()).get('firmware_version','1.12')
    if version=='1.12':return
    source=Path(path).read_text()
    source=source.replace("s=s[s.index(' def run('):s.index(' counts=0')]", "s=s[s.index(' def run('):s.index(' counts=0')];s=port_source(s,_PORT_VERSION)")
    source=source.replace('nanocore-1.12/firmware.bin',f'nanocore-{version}/firmware.bin')
    source=source.replace('0xd000', '0xc000' if version=='1.11' else '0x9000')
    if version=='1.11':
        source=source.replace('0x864','0x85c').replace('0x860','0x858').replace('0x308','0x304')
        source=source.replace('UC_RISCV_REG_S1,0x12345678','UC_RISCV_REG_S2,0x12345678').replace('u.mem_read(stack-12,4)','u.mem_read(stack-16,4)')
    if version=='1.10':
        for old,new in [('0x864','0x7e0'),('0x860','0x7de'),('0x308','0x2dc'),('0x13c','0x12c'),('0x140','0x130'),('0x144','0x134')]:source=source.replace(old,new)
    source=port_source(source,version)
    scope=dict(namespace,_OCTAVE_PORTED=True,_PORT_VERSION=version,port_source=port_source)
    exec(compile(source,str(path),'exec'),scope)
    raise SystemExit(0)
