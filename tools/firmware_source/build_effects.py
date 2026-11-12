"""Build an evidence-linked C research package for every 1.12 effect selector.

Preserves decompiler expressions, warnings and floating-register artifacts.
This is not a portable or buildable implementation of the DSP algorithms.
"""
import argparse,collections,hashlib,json,re
from pathlib import Path
from export_source import evidence,rename_identifiers
from organize_source import strip_literals

LEDGERS=['dsp-drive.json','dsp-chorus.json','dsp-delay-reverb.json','dsp-mod-pitch-wah.json','dsp-dynamics-cab-eq.json']
SOURCES=['analysis/rea-1.12/results','analysis/rea-1.12-dsp/results','analysis/rea-1.12-dsp-table/results','analysis/rea-1.12-effects/results']
MODULES={'dsp_delay':'delay','dsp_reverb':'reverb','mod':'modulation','fx2':'fx2','pitch':'pitch','wah':'wah','catalog':'metadata'}
def sha(data):return hashlib.sha256(data).hexdigest()
def module_name(value):
    value=MODULES.get(value,value.removeprefix('audio/').removeprefix('dsp/').removesuffix('.c'))
    if not re.fullmatch('[a-z0-9_/]+',value):raise ValueError('Invalid module '+value)
    return value

def build(output):
    if output.exists():raise ValueError('Use a fresh output directory')
    records={};by_evidence={};aliases=collections.defaultdict(set)
    for source in SOURCES:
        root=Path(source)
        for row in evidence(root/'00002-list.json')['raw_result']:aliases[row['value']].add(row['address'])
        for path in root.glob('*-export-*.json'):
            ev=evidence(path);code=ev.get('normalized_result');addr=path.stem.split('-export-')[1]
            if not isinstance(code,str):continue
            row=dict(address=addr,code=code,evidence=ev,source_export=str(path))
            records[addr]=row;by_evidence[ev['evidence_id']]=row
            aliases['FUN_ram_'+addr[2:]].add(addr)
    names={s['address']:s for s in json.loads(Path('evidence/firmware-source-names-1.12.json').read_text())['symbols']}
    modules={};seeds=set();ledgers={}
    for filename in LEDGERS:
        path=Path('evidence')/filename;data=json.loads(path.read_text());ledgers[filename]=data
        for f in data['functions']:
            if not f.get('proposed_name'):continue
            addr=f['address'];seeds.add(addr);modules[addr]=module_name(f['module'])
            if addr not in names or names[addr]['name'].startswith('nc_dsp_kind_'):
                names[addr]=dict(address=addr,name=f['proposed_name'],original_name='FUN_ram_'+addr[2:],basis=f['basis'],confidence='reviewed-static')
            if f['evidence_id'] not in by_evidence:raise ValueError('Unretained function evidence '+addr)
            chosen=by_evidence[f['evidence_id']]
            if chosen['address']!=addr:raise ValueError('Evidence/address mismatch')
            records[addr]=chosen
    # Additional model loader and orchestration roots whose indirect dispatch
    # cannot be established by textual call discovery alone.
    extras={
        '0x40088c50':('nc_model_decode_payload','model_runtime'),
        '0x40091e9c':('nc_model_load_slot_payload','model_storage'),
        '0x4005e044':('nc_dsp_process_chain','chain'),
        '0x4005feca':('nc_dsp_node_configure','chain'),
        '0x4005fa8e':('nc_dsp_inactive_bank','chain'),
        '0x4005faaa':('nc_dsp_active_bank','chain'),
        '0x4005fac2':('nc_dsp_publish_bank','chain'),
    }
    for addr,(name,module) in extras.items():
        seeds.add(addr);modules[addr]=module
        names.setdefault(addr,dict(address=addr,name=name,original_name='FUN_ram_'+addr[2:],basis='Reviewed DSP dispatch/model loading path.',confidence='reviewed-static'))
    catalog=json.loads(Path('evidence/effect-catalog-1.12.json').read_text())
    seeds.update(e['processor'] for e in catalog['effects'])
    for addr in seeds:
        if addr not in records:raise ValueError('Missing effect entry '+addr)
    # Textual function references include tail calls and passed callbacks, but
    # cannot discover data-driven or computed targets. Explicit seeds above
    # supply the reviewed indirect dispatch and copied Spring kernel.
    references={};ambiguous=[]
    for addr,row in records.items():
        tokens=set(re.findall(r'\b[A-Za-z_]\w*\b',strip_literals(row['code'])))
        refs=set()
        for token in tokens:
            matches=aliases.get(token,set())
            if len(matches)==1:refs.update(matches)
            elif len(matches)>1:ambiguous.append(dict(caller=addr,symbol=token,candidates=sorted(matches)))
        refs.discard(addr);references[addr]=refs
    queue=list(seeds);selected=set();missing=set()
    while queue:
        addr=queue.pop()
        if addr in selected:continue
        if addr not in records:missing.add(addr);continue
        selected.add(addr);queue.extend(references[addr]-selected)
    if missing:raise ValueError('Missing direct function references '+str(sorted(missing)))
    renames={}
    for symbol,addresses in aliases.items():
        if len(addresses)==1:
            addr=next(iter(addresses))
            if addr in names:renames[symbol]=names[addr]['name']
    output.mkdir(parents=True);functions=[]
    for addr in sorted(selected):
        row=records[addr];ev=row['evidence'];name=names.get(addr,{}).get('name','FUN_ram_'+addr[2:])
        module=modules.get(addr,'support/'+addr[2:6]);file='processors/'+module+'/'+addr[2:]+'_'+name+'.c'
        code=rename_identifiers(row['code'],renames)
        role=names.get(addr,{}).get('basis','Transitive helper; semantic role not yet named.').replace('*/','* /').replace('\n',' ')
        header=f'/* NanoCore 1.12: {name} at {addr}.\n * Role: {role}\n * REA: {ev["evidence_id"]}\n * Source: {row["source_export"]}\n * Decompiled C-like code, not original or buildable source.\n * Float-register/type artifacts and warnings intentionally retained.\n */\n'
        content=header+code;dest=output/file;dest.parent.mkdir(parents=True,exist_ok=True);dest.write_text(content)
        functions.append(dict(address=addr,name=name,module=module,file=file,evidence_id=ev['evidence_id'],target=ev['subject'],source_export=row['source_export'],source_code_sha256=sha(row['code'].encode()),sha256=sha(content.encode()),warnings=re.findall(r'/\*\s*WARNING:.*?\*/',code,re.S),bad_instruction='halt_baddata' in code,callees=sorted(references[addr]),reviewed=addr in modules))
    byaddr={f['address']:f for f in functions}
    # Attach branch-specific implementation evidence without conflating names,
    # aliases, model slots or dormant metadata with independent algorithms.
    effects=[]
    for original in catalog['effects']:
        effect=dict(original);matches=[]
        for ledger,data in ledgers.items():
            for e in data.get('effects',[]):
                block=e.get('ui_block')
                if block is None:
                    family=e.get('family','').lower();block={'mod':5,'fx2':1,'delay':4,'reverb':6}.get(family)
                target_block=0 if effect['block']==8 else effect['block']
                subtype=e.get('subtype',0)
                if subtype is None:subtype=0
                if block==target_block and subtype==effect['normalized_subtype']:matches.append(dict(ledger=ledger,assessment=e))
        if effect['block']==1 and effect['subtype']<8:
            matches.append(dict(ledger='dsp-drive.json',assessment=dict(name=effect['name'],processor='0x4006ca50',helper_processor='0x400741b8',model_slot=effect['subtype']+30,branch='FX2 subtype<8 forwards to shared model processor with mode1; stored DDPB asset supplies coefficients.',parameters=['GAIN','TONE','LEVEL'],limitation='BOOST variants5..7 expose a reduced UI control set; slot coefficients are external assets.')))
        elif effect['block']==2:
            matches.append(dict(ledger='dsp-drive.json',assessment=dict(name='AMP',processor='0x400741b8',helper_processor='0x30047ad2',branch='Shared model runtime with external low/mid/high EQ branch.',parameters=['GAIN','LOW','MID','HIGH','LEVEL'],limitation='Loaded model coefficients/topology are separate from firmware code.')))
        if not matches:raise ValueError('Selector has no branch assessment: '+str(effect))
        effect['callback_file']=byaddr[effect['processor']]['file'];effect['branch_evidence']=matches;effects.append(effect)
    manifest=dict(firmware='1.12',package_sha256=catalog['package_sha256'],format='annotated decompiler C; not a buildable audio library',selection_basis='Reviewed effect entries and helpers plus transitive unambiguous textual function references. Computed/indirect targets require explicit evidence; not whole-program completeness proof.',functions=functions,count=len(functions),reviewed_functions=sum(f['reviewed'] for f in functions),seeds=sorted(seeds),unresolved_direct_function_references=sorted(missing),ambiguous_function_references=[e for e in ambiguous if e['caller'] in selected],effects=effects,ledger_sha256={p:sha((Path('evidence')/p).read_bytes()) for p in LEDGERS},dormant_labels=catalog['dormant_labels'],synth_metadata=catalog['synth_metadata'])
    (output/'manifest.json').write_text(json.dumps(manifest,indent=2)+'\n')
    (output/'names.json').write_text(json.dumps({'firmware':'1.12','symbols':[s for a,s in sorted(names.items()) if a in selected]},indent=2)+'\n')
    (output/'symbols.tsv').write_text('address\tname\tfile\n'+''.join(f"{f['address']}\t{f['name']}\t{f['file']}\n" for f in functions))
    index='Effect implementations\n======================\n\nAll entries are firmware selector slots, including shared processors and aliases.\nEach linked callback leads to a family processor; follow named calls or symbols.tsv.\n\n'
    for block in range(10):
        rows=[e for e in effects if e['block']==block];title=rows[0]['family'];index+=title+'\n'+'-'*len(title)+'\n\n'
        for e in rows:index+=f"* {e['name']} (subtype {e['subtype']}, {e['status']}): `{byaddr[e['processor']]['name']} <{e['callback_file']}>`_\n"
        index+='\n'
    index+='Function index\n--------------\n\n'+''.join(f"* `{f['address']} {f['name']} <{f['file']}>`_\n" for f in functions)
    (output/'INDEX.rst').write_text(index)
    # Genuine compilable metadata; algorithm files deliberately remain faithful
    # to retained REA code rather than hiding unsupported types with fake stubs.
    (output/'catalog.h').write_text('#ifndef NC_EFFECT_CATALOG_H\n#define NC_EFFECT_CATALOG_H\n#include <stddef.h>\n#include <stdint.h>\nstruct nc_effect_descriptor { unsigned block, subtype, normalized_subtype; const char *family, *name; uint32_t firmware_callback; int alias; };\nextern const struct nc_effect_descriptor nc_effect_catalog[];\nextern const size_t nc_effect_catalog_count;\n#endif\n')
    c='#include "catalog.h"\n/* Recovered selector metadata; addresses are firmware addresses, not host pointers. */\nconst struct nc_effect_descriptor nc_effect_catalog[] = {\n'
    for e in effects:c+='  {%d, %d, %d, %s, %s, %su, %d},\n'%(e['block'],e['subtype'],e['normalized_subtype'],json.dumps(e['family']),json.dumps(e['name']),e['processor'],e['status']=='selector-alias')
    c+='};\nconst size_t nc_effect_catalog_count = sizeof(nc_effect_catalog)/sizeof(nc_effect_catalog[0]);\n';(output/'catalog.c').write_text(c)
    verify(output)
    return {k:manifest[k] for k in ['count','reviewed_functions','unresolved_direct_function_references']}

def verify(root):
    m=json.loads((root/'manifest.json').read_text());addresses=set()
    for f in m['functions']:
        if f['address'] in addresses:raise ValueError('Duplicate function address')
        addresses.add(f['address'])
        if sha((root/f['file']).read_bytes())!=f['sha256']:raise ValueError('Changed source '+f['address'])
    if len(addresses)!=m['count']:raise ValueError('Count mismatch')
    for e in m['effects']:
        if e['processor'] not in addresses or not (root/e['callback_file']).exists():raise ValueError('Missing effect callback')
    for f in m['functions']:
        if set(f['callees'])-addresses:raise ValueError('Missing direct dependency')
    return len(addresses)

if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--output',required=True,type=Path);p.add_argument('--verify',action='store_true');a=p.parse_args()
    print(json.dumps({'verified':verify(a.output)} if a.verify else build(a.output),indent=2))
