"""Materialize REA pseudocode with evidence links and reviewed local-variable names."""
import argparse,hashlib,json,re
from pathlib import Path

LOCALS={
 '0x40006efa': {'param_1':'partition_name','iVar1':'partition_count','iVar2':'partition_cursor','iVar3':'partition_index','iVar4':'name_comparison'},
 '0x40006f5e': {'param_1':'partition','param_2':'partition_offset','param_3':'destination','param_4':'byte_count','iVar1':'flash_device','uVar2':'read_result'},
 '0x40006df2': {'param_1':'partition'},
 '0x40013674': {'param_1':'packed_input','param_2':'packed_length','param_3':'decoded_output','param_4':'output_capacity','param_5':'decoded_length','bVar1':'high_bits','uVar2':'bit_index','uVar3':'input_offset','uVar4':'output_offset'},
 '0x40013750': {'param_1':'opcode','param_2':'handler'},
 '0x40013760': {'param_1':'message_kind','param_2':'callback','param_3':'callback_context'},
 '0x40012b30': {'param_1':'input_bytes'},
}

def evidence(path):
    envelope=json.loads(path.read_text());r=envelope['result']
    if r.get('structuredContent') is not None:return r['structuredContent']
    return json.loads(next(c['text'] for c in r['content'] if c['type']=='text'))

def rename_identifiers(code, names):
    # Preserve strings and comments verbatim, including diagnostic text.
    pattern = r'"(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\'|/\*.*?\*/|//[^\n]*|\b[A-Za-z_][A-Za-z_0-9]*\b'
    return re.sub(pattern, lambda m: names.get(m[0], m[0]), code, flags=re.S)

def main():
    p=argparse.ArgumentParser();p.add_argument('results',type=Path);p.add_argument('inventory',type=Path);p.add_argument('names',type=Path);p.add_argument('output',type=Path);p.add_argument('--version',default='1.10');a=p.parse_args();local_names=LOCALS if a.version=='1.10' else {}
    if a.output.exists():p.error('Output directory already exists')
    inventory=evidence(a.inventory);functions=inventory['raw_result'];names=json.loads(a.names.read_text())['symbols'];byaddr={n['address']:n for n in names}
    exports={}
    for path in a.results.glob('*export-*.json'):
        addr=path.stem.split('export-')[1];exports[addr]=(path,evidence(path))
    a.output.mkdir(parents=True);(a.output/'functions').mkdir();index=[];combined=[]
    for fn in functions:
        addr=fn['address'];label=byaddr.get(addr,{}).get('name',fn['value']);path,ev=exports.get(addr,(None,{}));code=ev.get('normalized_result')
        if not isinstance(code,str):code=ev.get('raw_result',{}).get('value') if isinstance(ev.get('raw_result'),dict) else None
        row={'address':addr,'name':label,'evidence_id':ev.get('evidence_id'),'status':'decompiled' if code else 'unavailable','reviewed_name':addr in byaddr}
        if not code:
            row['error']=ev.get('error', 'No pseudocode returned');index.append(row);continue
        # Rename exact identifiers only. Do not modify comments, expressions or types.
        renames={n.get('original_name','FUN_ram_'+n['address'][2:]):n['name'] for n in names}
        renames.update(local_names.get(addr,{}))
        code=rename_identifiers(code,renames)
        warnings=re.findall(r'/\*\s*WARNING:.*?\*/',code,re.S)
        row['warnings']=warnings;row['opaque_custom_operations']=bool(re.search(r'\bcustom\d',code));row['bad_instruction']=('halt_baddata' in code or 'Bad instruction' in code)
        row['locals_renamed']=local_names.get(addr,{})
        safe=re.sub('[^A-Za-z0-9_]','_',label);file=f'functions/{addr[2:]}_{safe}.c'
        header=f'/* NanoCore {a.version}, address {addr}.\n * REA evidence: {ev.get("evidence_id")}\n * Decompiled C-like analysis; not original or buildable source.\n * All decompiler warnings retained.\n */\n'
        content=header+code; (a.output/file).write_text(content);combined.append(content)
        row['file']=file;row['sha256']=hashlib.sha256(content.encode()).hexdigest();index.append(row)
    (a.output/'firmware.c').write_text('\n'.join(combined))
    report={'firmware_version':a.version,'target':inventory.get('subject'),'inventory_evidence_id':inventory.get('evidence_id'),'functions_discovered':len(functions),'decompiled':sum(x['status']=='decompiled' for x in index),'unavailable':sum(x['status']!='decompiled' for x in index),'reviewed_function_names':sum(x['reviewed_name'] for x in index),'functions_with_warnings':sum(bool(x.get('warnings')) for x in index),'functions_with_bad_instructions':sum(x.get('bad_instruction',False) for x in index),'functions_with_opaque_custom_operations':sum(x.get('opaque_custom_operations',False) for x in index),'functions':index}
    (a.output/'index.json').write_text(json.dumps(report,indent=2)+'\n')
    (a.output/'README.txt').write_text(f'NanoCore {a.version} decompilation\n\nfirmware.c combines every available REA function export. functions/ separates\neach function; index.json records addresses, names, evidence IDs and warnings.\n\nThis is C-like decompiler output, not original vendor source or a rebuildable\nproject. Unnamed FUN_* routines keep stable addresses until identified. Known\nfunction/data names are analyst annotations. A small set of local variables\nwere renamed from reviewed dataflow; types and control flow remain generated.\n\nThe workspace-local Ghidra language includes tested T-Head instruction semantics.\nUnsupported packed-DSP instructions, indirect calls, missing functions, data/code\nboundaries and unknown types remain explicit limitations. Function inventory is\nauto-analysis coverage, not proof that every executable byte is understood.\n\nSee docs/firmware-source.txt and tools/firmware_source/README.txt in the repo.\n')
    print(json.dumps({k:v for k,v in report.items() if k!='functions'},indent=2))

if __name__=='__main__':main()
