from pathlib import Path
import struct
p=Path(__file__).resolve().parent;b=(p/'spl_reader.o').read_bytes();assert b[:7]==b'\x7fELF\x01\x01\x01'
shoff=struct.unpack_from('<I',b,32)[0];entsize,count,names=struct.unpack_from('<HHH',b,46)
sections=[struct.unpack_from('<10I',b,shoff+i*entsize) for i in range(count)]
def data(s):return b[s[4]:s[4]+s[5]]
st=data(sections[names]);name=lambda s:st[s[0]:st.index(0,s[0])].decode()
idx=next(i for i,s in enumerate(sections) if name(s)=='.text');code=bytearray(data(sections[idx]));applied=0
for s in sections:
 if s[1]!=4 or s[7]!=idx:continue
 symtab=data(sections[s[6]])
 for r in range(0,s[5],12):
  off,info,add=struct.unpack_from('<IIi',data(s),r);typ=info&255;symbol=info>>8
  _,value,size,inf,oth,section=struct.unpack_from('<IIIBBH',symtab,symbol*16);assert section==idx
  delta=value+add-off;assert delta%2==0
  word=struct.unpack_from('<I',code,off)[0]
  if typ==16:
   assert -4096<=delta<4096
   word=(word&0x01fff07f)|(((delta>>12)&1)<<31)|(((delta>>5)&63)<<25)|(((delta>>1)&15)<<8)|(((delta>>11)&1)<<7)
  elif typ==17:
   assert -(1<<20)<=delta<(1<<20)
   word=(word&0xfff)|(((delta>>20)&1)<<31)|(((delta>>1)&1023)<<21)|(((delta>>11)&1)<<20)|(((delta>>12)&255)<<12)
  else:raise ValueError(typ)
  struct.pack_into('<I',code,off,word);applied+=1
(p/'spl_reader.bin').write_bytes(code);print('Linked',len(code),'bytes;',applied,'local branch relocations; no external relocations')
