#pragma once
#include <iostream>
#include "slAdsr.h"

class hnOutUnit {
    
    
    public:
    
        void setup(adsr_t a);
        float update();
        void bang();
        float getCurrent();
        void setOffset(float val);
    
        slAdsr adsr;
    
    
    private:
        float offsetChk(float val);
        float offset=0.0;

    
};