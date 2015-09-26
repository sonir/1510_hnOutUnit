#pragma once
#include <iostream>
#include "slAdsr.h"

class hnOutUnit {
    
    
    public:
    
        void setup(adsr_t a);
        float update();
        void bang();
        float getCurrent();
    
        slAdsr adsr;
        float offset=0.0;
    
    
    private:
        float offsetChk(float val);

    
};