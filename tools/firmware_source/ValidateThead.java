// @category NanoCore
import ghidra.app.script.GhidraScript;
import ghidra.app.emulator.EmulatorHelper;
import com.google.gson.*;
import java.nio.file.*;

public class ValidateThead extends GhidraScript {
 public void run() throws Exception {
  JsonArray cases = JsonParser.parseString(Files.readString(Path.of(getScriptArgs()[0]))).getAsJsonArray();
  int passed=0;
  for (JsonElement el: cases) {
   JsonObject c=el.getAsJsonObject(); EmulatorHelper e=new EmulatorHelper(currentProgram);
   try {
    long ins=c.get("word").getAsLong(); byte[] bytes=new byte[4];
    for(int i=0;i<4;i++)bytes[i]=(byte)(ins>>(8*i));
    e.writeMemory(toAddr(0x40000000L),bytes);
    for(var v:c.getAsJsonObject("registers").entrySet())e.writeRegister(v.getKey(),v.getValue().getAsLong());
    for(var v:c.getAsJsonObject("memory").entrySet())e.writeMemory(toAddr(Long.parseLong(v.getKey())),new byte[]{(byte)v.getValue().getAsInt()});
    e.writeRegister("pc",0x40000000L);
    if(!e.step(monitor))throw new Exception(c.get("name")+": "+e.getLastError());
    for(var v:c.getAsJsonObject("expected_registers").entrySet()) {
     java.math.BigInteger mask=java.math.BigInteger.ONE.shiftLeft(currentProgram.getRegister(v.getKey()).getBitLength()).subtract(java.math.BigInteger.ONE);
     java.math.BigInteger actual=e.readRegister(v.getKey()).and(mask);
     if(!actual.equals(new java.math.BigInteger(v.getValue().getAsString()).and(mask)))throw new Exception(c.get("name")+" "+v.getKey()+" actual="+actual+" expected="+v.getValue());
    }
    for(var v:c.getAsJsonObject("expected_memory").entrySet()) {
     int actual=e.readMemory(toAddr(Long.parseLong(v.getKey())),1)[0]&255;
     if(actual!=v.getValue().getAsInt())throw new Exception(c.get("name")+" memory mismatch");
    }
    passed++;
   } finally { e.dispose(); }
  }
  String result="{\"passed\":"+passed+",\"total\":"+cases.size()+"}";
  Files.writeString(Path.of(getScriptArgs()[1]),result+"\n"); println(result);
 }
}
