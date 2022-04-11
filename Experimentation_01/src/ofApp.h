#pragma once

#include "ofMain.h"
#include "myWaves.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        float theta;
        float amplitude;
        float frequency;
    
        float translate;
        float time;
    
        myWaves waves01;
        myWaves waves02;
        myWaves waves03;
        myWaves waves04;
        myWaves waves05;
        myWaves waves06;
    
        ofSoundPlayer  synth1;
    
        ofTrueTypeFont myfont;
		
};


