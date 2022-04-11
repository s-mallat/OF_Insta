#pragma once

#include "ofMain.h"


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
    
    int segments;
    float spacing;
    int radius;
    
    float x;
    float y;
    float z;
    
    float x1;
    float y1;
    float z1;
    
    float time;
    float value;
    float v;
    
    unsigned long last;
    int counter;
    ofColor col;
    ofColor col2;
    int alpha;
    float noise;
    
    ofEasyCam camera;
    ofSpherePrimitive sphere;
    
    ofLight pointLight;
    ofMaterial material;
    
    ofTexture mTex;
    ofTexture mTex2;
    
    ofSoundPlayer  synth1;
    ofSoundPlayer  synth2;
    ofSoundPlayer  synth3;



};
