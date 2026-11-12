import json,random,argparse
parser=argparse.ArgumentParser();parser.add_argument("output");args=parser.parse_args()
r=random.Random(1010);cases=[]
def add(name,funct3,hi,regs,expected,mem=None,outmem=None):
 word=0xb|(10<<7)|(funct3<<12)|(11<<15)|hi
 cases.append(dict(name=name,word=word,registers=regs,expected_registers=expected,memory=mem or {},expected_memory=outmem or {}))
for _ in range(30):
 a,b,d=[r.getrandbits(32) for i in range(3)];regs={'a0':d,'a1':a,'a2':b}
 for shift in range(4):add('addsl',1,(12<<20)|(shift<<25),regs,{'a0':(a+(b<<shift))&0xffffffff})
 for msb,lsb in [(31,0),(31,31),(30,23),(15,0),(7,3),(0,0)]:
  width=msb-lsb+1;v=(a>>lsb)&((1<<width)-1)
  add('extu',3,(msb<<26)|(lsb<<20),regs,{'a0':v})
  add('ext',2,(msb<<26)|(lsb<<20),regs,{'a0':(v if v<(1<<(width-1)) else v-(1<<width))&0xffffffff})
 for zero in [0,b]:
  for name,code,cond in [('mveqz',32,zero==0),('mvnez',33,zero!=0)]:add(name,1,(code<<25)|(12<<20),dict(regs,a2=zero),{'a0':a if cond else d})
 for name,code,v in [('mula',16,d+a*b),('muls',17,d-a*b)]:add(name,1,(code<<25)|(12<<20),regs,{'a0':v&0xffffffff})
 for name,code,size,unsigned in [('b',0,1,False),('bu',16,1,True),('h',4,2,False),('hu',20,2,True),('w',8,4,True)]:
  base=0x30041000;idx=r.randrange(10);shift=r.randrange(4);ea=base+(idx<<shift);data=[r.randrange(256) for i in range(size)];v=int.from_bytes(bytes(data),'little',signed=not unsigned)&0xffffffff
  add('lr'+name,4,(code<<27)|(shift<<25)|(12<<20),{'a0':d,'a1':base,'a2':idx},{'a0':v},{ea+i:x for i,x in enumerate(data)})
  for after,delta in [(True,3),(False,1)]:
   imm=r.choice([-16,-1,0,1,15]);nxt=base+(imm<<shift);ea=base if after else nxt
   add('l'+name+('ia' if after else 'ib'),4,((code+delta)<<27)|(shift<<25)|((imm&31)<<20),{'a0':d,'a1':base},{'a0':v,'a1':nxt},{ea+i:x for i,x in enumerate(data)})
 for name,code,size in [('b',0,1),('h',4,2),('w',8,4)]:
  base=0x30041000;idx=r.randrange(10);shift=r.randrange(4);ea=base+(idx<<shift);data=list(d.to_bytes(4,'little')[:size])
  add('sr'+name,5,(code<<27)|(shift<<25)|(12<<20),{'a0':d,'a1':base,'a2':idx},{'a0':d,'a1':base},{},{ea+i:x for i,x in enumerate(data)})
  for after,delta in [(True,3),(False,1)]:
   imm=r.choice([-16,-1,0,1,15]);nxt=base+(imm<<shift);ea=base if after else nxt
   add('s'+name+('ia' if after else 'ib'),5,((code+delta)<<27)|(shift<<25)|((imm&31)<<20),{'a0':d,'a1':base},{'a0':d,'a1':nxt},{},{ea+i:x for i,x in enumerate(data)})
# Legacy P operations: exercise carry/borrow, signed products and input/output aliasing.
def raw(name,word,regs,expected):
 cases.append(dict(name=name,word=word,registers=regs,expected_registers=expected,memory={},expected_memory={}))
mask32=(1<<32)-1;mask64=(1<<64)-1
def signed(v):return v if v<1<<31 else v-(1<<32)
for iteration in range(100):
 a,b,d=[r.getrandbits(64) for i in range(3)]
 if iteration<4:a,b,d=[(0,1,0),(mask64,1,mask64),(1<<63,1<<63,0),(0xffffffff,1,0)][iteration]
 regs={'a0':d&mask32,'a1':d>>32,'a2':a&mask32,'a3':a>>32,'a4':b&mask32,'a5':b>>32}
 for name,code,v in [('add64',0xc0001077,a+b),('sub64',0xc2001077,a-b)]:
  for dest in [10,12,14]:
   names={10:('a0','a1'),12:('a2','a3'),14:('a4','a5')}[dest];v&=mask64
   raw(name,code|(dest<<7)|(12<<15)|(14<<20),regs,{names[0]:v&mask32,names[1]:v>>32})
 for name,code,v in [('mulr64',0xf0001077,(a&mask32)*(b&mask32)),('umar64',0xa4001077,d+(a&mask32)*(b&mask32)),('smar64',0x84001077,d+signed(a&mask32)*signed(b&mask32))]:
  v&=mask64;raw(name,code|(10<<7)|(12<<15)|(14<<20),regs,{'a0':v&mask32,'a1':v>>32})
 for shift in [0,1,16,31]:raw('wexti',0xde000077|(10<<7)|(12<<15)|(shift<<20),regs,{'a0':(a>>shift)&mask32})
 for pos in range(4):raw('insb',0xac000077|(10<<7)|(12<<15)|(pos<<20),regs,{'a0':((d&~(255<<(pos*8)))|((a&255)<<(pos*8)))&mask32})
 for name,code,v in [('pkbb16',0x0e001077,((a&65535)<<16)|(b&65535)),('pktb16',0x3e001077,(a&0xffff0000)|(b&65535)),('minw',0xf0000077,min(signed(a&mask32),signed(b&mask32))),('maxw',0xf2000077,max(signed(a&mask32),signed(b&mask32)))]:
  raw(name,code|(10<<7)|(12<<15)|(14<<20),regs,{'a0':v&mask32})
 raw('swap8',0xad800077|(10<<7)|(12<<15),regs,{'a0':((a&0x00ff00ff)<<8)|((a&0xff00ff00)>>8)})
 raw('fmv.x.hw',0xc000100b|(10<<7)|(10<<15),{'fa0':a},{'a0':a>>32})
 raw('fmv.hw.x',0xa000100b|(10<<7)|(12<<15),dict(regs,fa0=d),{'fa0':(d&mask32)|((a&mask32)<<32)})
json.dump(cases,open(args.output,'w'));print(len(cases))
