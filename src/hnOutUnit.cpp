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

void hnOutUnit::setOffset(float val){
#ifdef DEBUG
    std::cout << "offset set:" << val << std::endl;
#endif//
    offset = val;
    
}

float hnOutUnit::offsetChk(float val){
    
    if(val < offset) return offset;
    else return val;
    
}