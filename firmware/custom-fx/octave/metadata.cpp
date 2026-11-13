#include "controls.h"
#include <cstdint>
extern "C" volatile std::uint32_t nc_octave_fault;
extern "C" const float nc_octave_defaults_values[11]={.65f,.05f,.3f,.65f,.35f,0.f,6350.f/17850.f,0.f,0.f,0.f,.5f};
extern "C" const char nc_octave_name[]="OCTAVE";
extern "C" const char* nc_octave_label(unsigned,unsigned,unsigned index,unsigned) {
    static const char* const labels[]={"DRY","-2 OCT","-1 OCT","+1 OCT","+2 OCT","ATTACK","LOWPASS","DETUNE","DRY FX","RESON","LEVEL"};
    return index<11?labels[index]:"";
}
extern "C" int nc_octave_format(unsigned,unsigned,unsigned index,char* out,unsigned size,const void*,float value) {
    if(!out||!size)return -1;
    const char* text="";char digits[24];
    if(index<11) {
        value=nc_octave_controls::bounded(value,index);
        if(nc_octave_fault) {text="CPU LIMIT";}
        else if(index==8) {
            static const char* const modes[]={"SMOOTH","SMOOTH","FILTER","DETUNE"};
            text=modes[nc_octave_controls::choice(value)];
        } else if(index==9) {
            static const char* const modes[]={"LOW","MEDIUM","HIGH","PEAK"};
            text=modes[nc_octave_controls::choice(value)];
        } else {
            unsigned number=unsigned(value*100.f+.5f);const char* suffix="%";
            if(index==5){number=unsigned(value*2000.f+.5f);suffix="ms";}
            if(index==6){number=unsigned(150.f+value*17850.f+.5f);suffix="Hz";}
            if(index==7){number=unsigned(value*30.f+.5f);suffix="ct";}
            if(index==10){number=unsigned(value*200.f+.5f);}
            char reverse[8];unsigned n=0,j=0;
            do {reverse[n++]=char('0'+number%10);number/=10;} while(number);
            while(n)digits[j++]=reverse[--n];
            while(*suffix)digits[j++]=*suffix++;
            digits[j]=0;text=digits;
        }
    }
    unsigned i=0;while(i+1<size && text[i]){out[i]=text[i];++i;}out[i]=0;
    // Native UI caller treats zero as success. Returning one makes it
    // overwrite this text using the original pitch-effect formatter.
    return index<11?0:-1;
}
