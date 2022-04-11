//
//  myWaves.hpp
//  MathInMotion
//
//  Created by Sally Mallat on 09/04/2022.
//

#ifndef myWaves_hpp
#define myWaves_hpp

#include <stdio.h>
#include "ofMain.h"

class myWaves {
    
    public:
    
        myWaves();
    
        void setup();
        void update();
        void draw();
        
        float theta;
        float amplitude;
        float frequency;

        float translate;
        float time;
};


#endif /* myWaves_hpp */
