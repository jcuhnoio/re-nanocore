"""Export all discovered functions through REA's public MCP stdio interface."""
import argparse,json,os,queue,subprocess,threading
from pathlib import Path


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--rea',required=True,type=Path);p.add_argument('--ghidra',required=True,type=Path)
    p.add_argument('--java-home',required=True,type=Path);p.add_argument('--elf',required=True,type=Path)
    p.add_argument('--output',required=True,type=Path);p.add_argument('--function-info',action='store_true');p.add_argument('--procedures',nargs='+',help='Export only these addresses, preserving full discovery inventory');a=p.parse_args()
    if a.output.exists():p.error('Output must be a new directory')
    a.output.mkdir(parents=True);results=a.output/'results';results.mkdir()
    env=dict(os.environ,GHIDRA_INSTALL_DIR=str(a.ghidra.resolve()),JAVA_HOME=str(a.java_home.resolve()))
    env['PATH']=env['JAVA_HOME']+'/bin:'+env['PATH']
    with (a.output/'server-stderr.log').open('w') as log:
        server=subprocess.Popen([str(a.rea.resolve()),'--mcp'],stdin=subprocess.PIPE,stdout=subprocess.PIPE,stderr=log,text=True,env=env,bufsize=1)
        messages=queue.Queue();ident=0;opened=False
        def receive():
            for line in server.stdout:
                try:messages.put(json.loads(line))
                except json.JSONDecodeError:pass
            messages.put(None)
        threading.Thread(target=receive,daemon=True).start()
        def rpc(method,params):
            nonlocal ident
            ident+=1
            server.stdin.write(json.dumps({'jsonrpc':'2.0','id':ident,'method':method,'params':params})+'\n');server.stdin.flush()
            while True:
                msg=messages.get(timeout=900)
                if msg is None:raise RuntimeError('REA exited; inspect server-stderr.log')
                if msg.get('id')==ident:return msg
        def call(name,args,filename):
            msg=rpc('tools/call',{'name':name,'arguments':args})
            (results/filename).write_text(json.dumps(msg,indent=2)+'\n')
            r=msg.get('result',{})
            if r.get('isError') or 'error' in msg:raise RuntimeError(f'{name} failed; see {filename}')
            return r.get('structuredContent') or json.loads(next(c['text'] for c in r['content'] if c['type']=='text'))
        try:
            init=rpc('initialize',{'protocolVersion':'2024-11-05','capabilities':{},'clientInfo':{'name':'nanocore-source-export','version':'1'}})
            (a.output/'initialize.json').write_text(json.dumps(init,indent=2)+'\n')
            server.stdin.write('{"jsonrpc":"2.0","method":"notifications/initialized"}\n');server.stdin.flush()
            tools=rpc('tools/list',{});(a.output/'tools.json').write_text(json.dumps(tools,indent=2)+'\n')
            call('open_binary',{'path':str(a.elf.resolve()),'provider_id':'ghidra'},'00001-open.json');opened=True
            inventory=call('list_procedures',{},'00002-list.json')['raw_result']
            selected=inventory if not a.procedures else [{'address':addr} for addr in a.procedures]
            for i,fn in enumerate(selected):
                # Preserve per-function failures and continue to export remaining coverage.
                try:call('procedure_pseudo_code',{'procedure':fn['address']},f'{i+1000:05d}-export-{fn["address"]}.json')
                except RuntimeError as exc:print(exc,flush=True)
                if a.function_info:
                    call('procedure_info',{'procedure':fn['address']},f'{i+1000:05d}-info-{fn["address"]}.json')
                if i%100==0:print(f'{i+1}/{len(selected)}',flush=True)
            call('export_evidence_bundle',{'path':str((a.output/'evidence.json').resolve())},'90000-bundle.json')
        finally:
            try:
                if opened:call('close_binary',{},'90001-close.json')
            finally:
                server.stdin.close()
                try:server.wait(timeout=20)
                except subprocess.TimeoutExpired:server.terminate();server.wait(timeout=10)

if __name__=='__main__':main()
