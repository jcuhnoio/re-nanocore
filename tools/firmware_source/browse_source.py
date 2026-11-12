"""Find functions and their unambiguous pseudocode callers/callees offline."""
import argparse,json
from pathlib import Path

def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('query');p.add_argument('--root',type=Path,default=Path(__file__).resolve().parents[2]/'firmware');p.add_argument('--calls',action='store_true');a=p.parse_args()
    manifest=json.loads((a.root/'manifest.json').read_text());rows=manifest['functions'];byaddr={r['address']:r for r in rows};q=a.query.lower()
    matches=[r for r in rows if q in r['name'].lower() or q in r['address'].lower()]
    graph=json.loads((a.root/'callgraph.json').read_text()) if a.calls else {}
    def show(r,prefix=''):
        print(f"{prefix}{r['address']} {r['name']}  {a.root/r['file']}:{r['line']}")
    for r in matches:
        show(r);print(f"  placement={r['placement']}; warnings={len(r['warnings'])}; opaque={r['opaque_custom_operations']}")
        if a.calls:
            for e in graph['edges']:
                if e['caller']==r['address']:show(byaddr[e['callee']],'  calls ')
                if e['callee']==r['address']:show(byaddr[e['caller']],'  called by ')
            for e in graph['ambiguous_calls']:
                if e['caller']==r['address']:print(f"  ambiguous call {e['symbol']}: {', '.join(e['candidates'])}")
    if not matches:raise SystemExit('No matching function')

if __name__=='__main__':main()
