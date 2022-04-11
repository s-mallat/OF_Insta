#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    ofBackground(255, 194, 212);
    ofBackground(0);
    ofSetCircleResolution(100);

    last = ofGetElapsedTimeMillis();
    col.setHsb(0,150,255);
    
    col2.setHsb(0,50,155);
    alpha = ofMap(ofRandom(55, 225), 10, 200, 50, 220);
    sphere.setRadius(ofGetWidth() * .12);
    
    ofSetSmoothLighting(true);
    pointLight.setSpecularColor( ofFloatColor(0.5f, 0.5f, 0.5f));
    
    material.setShininess( 100 );
    material.setDiffuseColor(ofColor(255, 255, 255, 255));

    ofSetSphereResolution(24);
    
    ofDisableArbTex();
    ofLoadImage(mTex,"mathias-p-r-reding-G3zYN4hlXmU-unsplash.jpg");
    mTex.setTextureWrap(GL_REPEAT, GL_REPEAT);
    mTex.setTextureMinMagFilter(GL_NEAREST, GL_NEAREST);
    
    ofLoadImage(mTex2,"paul-volkmer-qVotvbsuM_c-unsplash.jpg");
    mTex2.setTextureWrap(GL_REPEAT, GL_REPEAT);
    mTex2.setTextureMinMagFilter(GL_NEAREST, GL_NEAREST);
        
    ofHideCursor();
    
    synth1.load("610148__voxlab__90s-style-pad-chord-4-gmaj7.wav");
    synth1.setVolume(0.75f);
    synth1.setLoop(true);
    
    synth1.play();
    synth1.setSpeed(1.0f);
    
    
    synth2.load("610150__voxlab__90s-style-pad-chord-6-eb-min-chord.wav");
    synth2.setVolume(0.75f);
    synth2.setLoop(true);
    
    synth2.play();
    synth2.setSpeed(1.0f);
    
    synth3.load("610151__voxlab__90s-style-pad-chord-7.wav");
    synth3.setVolume(0.75f);
    synth3.setLoop(true);
    
    synth3.play();
    synth3.setSpeed(1.0f);
}

//--------------------------------------------------------------
void ofApp::update(){
    //ofSetColor(col, alpha);
    ofSoundUpdate();

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofPushMatrix();
    ofFill();
    ofRotateDeg(time * 2);
    mTex2.bind();
    ofSetColor(col2);
    ofDrawPlane(0, 0, 2000, 2000);
    mTex2.unbind();
    ofPopMatrix();
    
    pointLight.setDiffuseColor( ofFloatColor(col) );

    if(ofGetElapsedTimeMillis() - last > 50)
        {
            col.setHue(counter % 256);
            counter ++;
            last = ofGetElapsedTimeMillis();
        }
    
    pointLight.setPosition((ofGetWidth()*.5)+ cos(ofGetElapsedTimef()*.5)*(ofGetWidth()*.3), ofGetHeight()/2, 500);
  
    camera.begin();

    segments = 1000;
    spacing = TWO_PI / segments;
    radius = 200;
    time = ofGetElapsedTimef();
    value = sin( time / M_TWO_PI );
    v = ofMap( value, -1, 1, 0, 255 );
    
    
    ofTranslate(0, 0);

    ofFill();
    ofSetLineWidth(3);
    ofRotateDeg(time * 2);
    
    ofEnableAlphaBlending();
    ofEnableDepthTest();
    mTex.bind();
    ofEnableLighting();
    pointLight.enable();
    material.begin();
    

          for (int i = 0; i < 500; i++) {
              
              x = tan(spacing * i * (ofGetMouseX()/50)) * cos(spacing * i * (ofGetMouseY()/50)) * radius;
              
              y = tan(spacing * i * (ofGetMouseX()/50)) * sin(spacing * i * (ofGetMouseY()/50)) * radius;
              
              
              x1 = sin(spacing * i * value * 5);
            
 
              ofDrawSphere(x, y, 50 * x1);
              }
    
    ofPushMatrix();
    ofRotateXDeg(time * 2);

    for (int i = 0; i < 500; i++) {
        
        x = tan(spacing * i * (ofGetMouseX()/50)) * cos(spacing * i * (ofGetMouseY()/50)) * radius;
        
        y = tan(spacing * i * (ofGetMouseX()/50)) * sin(spacing * i * (ofGetMouseY()/50)) * radius;
        
        
        x1 = sin(spacing * i * value * 5);
      

        ofDrawSphere(y + v + i, x, 20 * x1);
        }
    ofPopMatrix();
    
    
    ofPushMatrix();
    ofRotateYDeg(time * 2);
    
    for (int i = 0; i < 500; i++) {
        
        x = tan(spacing * i * (ofGetMouseX()/50)) * cos(spacing * i * (ofGetMouseY()/50)) * radius;
        
        y = tan(spacing * i * (ofGetMouseX()/50)) * sin(spacing * i * (ofGetMouseY()/50)) * radius;
        
        
        x1 = sin(spacing * i * value * 5);
      

        ofDrawSphere(y + i, x + v, 5 * x1);
        }
    ofPopMatrix();
    
    

    ofDisableAlphaBlending();
    material.end();
    mTex.unbind();
    ofDisableDepthTest();
    camera.end();
    
//    ofPushMatrix();
//    ofNoFill();
//    ofSetColor(255, 255, 255);
//    ofSetLineWidth(3);
//    ofTranslate(0, 0);
//    ofBeginShape();
//          for (int i = 0; i < 500; i++) {
//
//              x = tan(spacing * i * (ofGetMouseX()/50)) * cos(spacing * i * (ofGetMouseY()/50)) * radius;
//
//              y = tan(spacing * i * (ofGetMouseX()/50)) * sin(spacing * i * (ofGetMouseY()/50)) * radius;
//
//              z = sin(spacing * i * (ofGetMouseX()/50)) * cos(spacing * i * (ofGetMouseY()/50)) * radius;
//
//              x1 = sin(spacing * i * value * 5);
//
//              y1 = sin(spacing * i * (ofGetMouseX()/50)) * value * radius;
//
//              z1 = sin(spacing * i * (ofGetMouseX()/50)) * value * radius;
//
//
//              ofDrawCircle(x, y, 50 * x1);
//              }
//    ofEndShape(true);
//    ofPopMatrix();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}
