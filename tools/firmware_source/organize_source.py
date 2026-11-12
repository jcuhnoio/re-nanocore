"""Create a navigable research tree without altering decompiled function bytes."""
import argparse,collections,hashlib,json,re
from pathlib import Path

TITLES={
 'bluetooth':'Radio UART transport and shutdown command path', 'audio':'Effect metadata and parameter presentation', 'power':'Device shutdown and power handling',
 'boot':'Entry and runtime startup', 'runtime':'Reviewed C runtime helpers',
 'storage':'Flash abstraction and partition lookup/read', 'formats':'Binary field readers',
 'update':'Updater image discovery', 'protocol':'MIDI dispatch and registered command families',
 'unresolved':'Unidentified code, grouped by original address (not inferred subsystem)',
}

def digest(data):return hashlib.sha256(data).hexdigest()
def strip_literals(code):
    return re.sub(r'"(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\'|/\*.*?\*/|//[^\n]*',' ',code,flags=re.S)

def call_edges(functions,bodies):
    symbols=collections.defaultdict(list)
    for f in functions:symbols[f['name']].append(f['address'])
    edges=[];ambiguous=[]
    for f in functions:
        text=strip_literals(bodies[f['address']]);body=text[text.find('{')+1:]
        for symbol in sorted(set(re.findall(r'\b([A-Za-z_]\w*)\s*\(',body))):
            targets=symbols.get(symbol,[])
            if len(targets)==1:edges.append({'caller':f['address'],'callee':targets[0],'symbol':symbol})
            elif targets:ambiguous.append({'caller':f['address'],'symbol':symbol,'candidates':targets})
    return edges,ambiguous

def build(source,layout,dest):
    index=json.loads((source/'index.json').read_text());functions=index['functions'];version=index.get('firmware_version','1.10')
    layout_data=json.loads(layout.read_text())
    if layout_data.get('firmware_version','1.10')!=version:raise ValueError('Layout firmware version does not match source')
    placements=layout_data['functions'];groups=collections.defaultdict(list);bodies={}
    for f in functions:
        if f['status']!='decompiled':raise ValueError('Source inventory contains unavailable functions')
        data=(source/f['file']).read_bytes()
        if digest(data)!=f['sha256']:raise ValueError('Input hash mismatch: '+f['address'])
        bodies[f['address']]=data.decode()
        address=int(f['address'],16)
        path=placements.get(f['address'],{}).get('file',f'unresolved/bank_{address>>28:x}/block_{address&~0xfff:08x}.c')
        if not re.fullmatch(r'[a-z0-9_/]+\.c',path):raise ValueError('Unsafe module path')
        groups[path].append(f)
    if set(placements)-{f['address'] for f in functions}:raise ValueError('Placement references unknown function')
    if (dest/'manifest.json').exists():raise ValueError('Destination is already generated; use a fresh output directory')
    dest.mkdir(parents=True,exist_ok=True);manifest=[]
    for path,items in sorted(groups.items()):
        content=f'/* NanoCore {version} analysis module: {path}\n * C-like decompilation, not buildable original source.\n * See README.rst and manifest.json for provenance and limitations.\n */\n\n'
        for f in sorted(items,key=lambda x:int(x['address'],16)):
            start=len(content.encode());line=content.count('\n')+1;data=bodies[f['address']];content+=data+'\n'
            row=dict(f);row.update(source_file=f['file'],file=path,line=line,byte_offset=start,byte_length=len(data.encode()),placement='reviewed' if f['address'] in placements else 'unresolved-address-bucket',placement_basis=placements.get(f['address'],{}).get('basis','Address locality only; no semantic ownership inferred.'))
            manifest.append(row)
        target=dest/path;target.parent.mkdir(parents=True,exist_ok=True);target.write_text(content)
    manifest.sort(key=lambda x:int(x['address'],16));byaddr={f['address']:f for f in manifest}
    edges,ambiguous=call_edges(functions,bodies);incoming=collections.Counter(e['callee'] for e in edges);outgoing=collections.Counter(e['caller'] for e in edges)
    graph={'basis':'Direct textual call expressions in decompiled function bodies; not native call-graph proof. Comments/strings and function declarations excluded. Indirect calls are not resolved.','edges':edges,'ambiguous_calls':ambiguous}
    (dest/'callgraph.json').write_text(json.dumps(graph,indent=2)+'\n')
    summary={'firmware_version':version,'target':index['target'],'source_index_sha256':digest((source/'index.json').read_bytes()),'layout_sha256':digest(layout.read_bytes()),'functions':manifest,'count':len(manifest),'source_files':len(groups),'reviewed_placements':sum(x['placement']=='reviewed' for x in manifest),'warnings':sum(bool(x['warnings']) for x in manifest),'opaque_custom_operations':sum(x['opaque_custom_operations'] for x in manifest),'bad_instructions':sum(x['bad_instruction'] for x in manifest),'integrity':'Each byte range preserves its source function file exactly; sha256 is the original per-function digest.'}
    (dest/'manifest.json').write_text(json.dumps(summary,indent=2)+'\n')
    (dest/'symbols.tsv').write_text('address\tname\tfile\tline\tplacement\tcallers\tcallees\n'+''.join(f"{f['address']}\t{f['name']}\t{f['file']}\t{f['line']}\t{f['placement']}\t{incoming[f['address']]}\t{outgoing[f['address']]}\n" for f in manifest))
    indextext='Function index\n==============\n\nAddresses are authoritative identifiers. Duplicate display names are not merged.\nCall relationships are derived from pseudocode; indirect calls remain unresolved.\n\n'
    for module in TITLES:
        rows=[f for f in manifest if f['file'].startswith(module+'/')]
        indextext+=module+'\n'+'-'*len(module)+'\n\n'
        indextext+=''.join(f"* `{f['address']} {f['name']} <{f['file']}#L{f['line']}>`_\n" for f in rows)+'\n'
        directory=dest/module;directory.mkdir(exist_ok=True)
        title=TITLES[module];readme=title+'\n'+'='*len(title)+'\n\n'+f'{len(rows)} functions. See `full index <../INDEX.rst>`_ for individual definitions.\n\n'
        if module=='unresolved':readme+='These files group functions by 4 KiB entry-address windows, not by meaning.\nA function can extend beyond its window. Preserve addresses until its role is\nverified; then add a placement to tools/firmware_source/modules.json.\n\n'
        else:readme+='Placements use the naming ledger and observed opcode registration families.\nGeneric opcode names remain generic until their behavior is established.\n\n'
        for path in sorted({f['file'] for f in rows}):
            members=[f for f in rows if f['file']==path];rel=path.split('/',1)[1]
            readme+=f'* `{rel} <{rel}>`_: {len(members)} functions, '+str(sum(bool(f['warnings']) for f in members))+' with warnings.\n'
        (directory/'README.rst').write_text(readme)
    (dest/'INDEX.rst').write_text(indextext)
    review='Review queue\n============\n\nOpaque custom operations\n------------------------\n\n'
    for f in manifest:
        if f['opaque_custom_operations']:review+=f"* `{f['address']} {f['name']} <{f['file']}#L{f['line']}>`_\n"
    review+='\nFrequently called unidentified functions\n---------------------------------------\n\nRanked by unambiguous textual caller count, not inferred importance or DSP role.\n\n'
    for f in sorted((f for f in manifest if f['placement']!='reviewed'),key=lambda f:(-incoming[f['address']],f['address']))[:30]:
        review+=f"* `{f['address']} {f['name']} <{f['file']}#L{f['line']}>`_: {incoming[f['address']]} callers.\n"
    review+=f'\n{len(ambiguous)} call expressions have duplicate-name ambiguity; candidates are\npreserved in callgraph.json instead of choosing a destination.\n'
    (dest/'REVIEW.rst').write_text(review)
    verify(dest)
    return {k:v for k,v in summary.items() if k not in ['functions','target']}

def verify(dest):
    manifest=json.loads((dest/'manifest.json').read_text());seen=set();cache={}
    for f in manifest['functions']:
        if f['address'] in seen:raise ValueError('Duplicate address')
        seen.add(f['address']);path=f['file']
        if path not in cache:cache[path]=(dest/path).read_bytes()
        data=cache[path];start=f['byte_offset'];end=start+f['byte_length']
        if digest(data[start:end])!=f['sha256']:raise ValueError('Function bytes changed: '+f['address'])
        if data[:start].count(b'\n')+1!=f['line']:raise ValueError('Wrong line mapping')
    if len(seen)!=manifest['count']:raise ValueError('Count mismatch')
    graph=json.loads((dest/'callgraph.json').read_text())
    if any(e['caller'] not in seen or e['callee'] not in seen for e in graph['edges']):raise ValueError('Dangling graph edge')
    for supplemental in dest.glob('supplemental-*/index.json'):
        for f in json.loads(supplemental.read_text())['functions']:
            if digest((supplemental.parent/f['file']).read_bytes())!=f['sha256']:
                raise ValueError('Supplemental function bytes changed: '+f['address'])
    return len(seen)

if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--source',type=Path);p.add_argument('--layout',type=Path,default=Path(__file__).with_name('modules.json'));p.add_argument('--output',required=True,type=Path);p.add_argument('--verify',action='store_true');a=p.parse_args()
    if a.verify:print(f'Verified {verify(a.output)} functions')
    elif a.source:print(json.dumps(build(a.source,a.layout,a.output),indent=2))
    else:p.error('--source is required unless --verify is used')
