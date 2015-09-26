#include "hnOutUnit.h"

void hnOutUnit::setup(adsr_t a){
    
    adsr.setup(a);
    
}

float hnOutUnit::update(){
    
    float val = adsr.update();
    return offsetChk(val);
    
}

void hnOutUnit::bang(){
    
    adsr.bang();
    
}



float hnOutUnit::getCurrent(){
    
    
    float val = adsr.getCurrent();
    return offsetChk(val);

    
}



float hnOutUnit::offsetChk(float val){
    
    if(val < offset) return offset;
    else return val;
    
}