"""Materialize focused REA entry points separately from baseline function inventory."""
import argparse,hashlib,json,re
from pathlib import Path
from export_source import evidence,rename_identifiers

if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--results',type=Path,nargs='+',required=True);p.add_argument('--names',type=Path,required=True)
    p.add_argument('--procedures',nargs='+',required=True);p.add_argument('--output',type=Path,required=True);p.add_argument('--version',required=True);a=p.parse_args()
    if a.output.exists():p.error('Use a fresh output directory')
    symbols=json.loads(a.names.read_text())['symbols'];byaddr={s['address']:s for s in symbols}
    renames={s.get('original_name','FUN_ram_'+s['address'][2:]):s['name'] for s in symbols}
    paths={q.stem.split('-export-')[1]:q for root in a.results for q in root.glob('*-export-*.json')}
    missing=set(a.procedures)-paths.keys()
    if missing:p.error('Missing exports: '+str(sorted(missing)))
    a.output.mkdir(parents=True);rows=[]
    for addr in a.procedures:
        path=paths[addr];ev=evidence(path);code=ev['normalized_result'];name=byaddr.get(addr,{}).get('name','FUN_ram_'+addr[2:])
        code=rename_identifiers(code,renames)
        content=f'/* NanoCore {a.version}, supplemental entry {addr}.\n * REA evidence: {ev["evidence_id"]}\n * Focused seeded analysis; may overlap baseline function bodies.\n * C-like analysis only, not original or buildable code.\n */\n'+code
        filename=addr[2:]+'_'+name+'.c';(a.output/filename).write_text(content)
        rows.append(dict(address=addr,name=name,file=filename,evidence_id=ev['evidence_id'],target=ev['subject'],source_export=str(path),sha256=hashlib.sha256(content.encode()).hexdigest(),warnings=re.findall(r'/\*\s*WARNING:.*?\*/',code,re.S)))
    (a.output/'index.json').write_text(json.dumps({'firmware':a.version,'basis':'Focused seeded entry points; separate coverage, may overlap baseline bodies. Do not add discovery counts.','names_sha256':hashlib.sha256(a.names.read_bytes()).hexdigest(),'functions':rows},indent=2)+'\n')
    (a.output/'README.rst').write_text('Supplemental DSP entry points\n=============================\n\nFocused seeds recover callbacks missed by baseline automatic discovery.\nThese bodies may overlap baseline functions and are not counted as independent\nnew functions. index.json preserves target, evidence ID and body hash.\n\n'+''.join(f'* `{r["name"]} ({r["address"]}) <{r["file"]}>`_\n' for r in rows))
