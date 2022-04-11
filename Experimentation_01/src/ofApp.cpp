#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //ofBackground(229, 228, 230);
    ofBackground(255);
    ofSetCircleResolution(100);
    ofSetFrameRate(80);
    
    synth1.load("573306__xcreenplay__far-east-comet.wav");
    synth1.setVolume(0.75f);
    synth1.setLoop(true);
    
    synth1.play();
    synth1.setSpeed(1.0f);
    
    myfont.load("Courier New Bold.ttf", 10);
}

//--------------------------------------------------------------
void ofApp::update(){
    ofSoundUpdate();
}

//--------------------------------------------------------------
void ofApp::draw(){
    

//    ofFill();
//    ofSetRectMode(OF_RECTMODE_CENTER);
//    ofDrawRectangle(ofGetWidth()/2, 20, 150, 20);

       
    if (ofGetFrameNum() <= 600) {
        
        ofPushMatrix();
        ofTranslate(-400,0);
        waves02.draw();
        ofPopMatrix();
        
        ofPushMatrix();
        ofTranslate(400,0);
        waves03.draw();
        ofPopMatrix();
        
        ofPushMatrix();
        ofTranslate(0,800);
        waves01.draw();
        ofPopMatrix();
    }
    
    if (ofGetFrameNum() > 600 && ofGetFrameNum() <= 1200) {
        
        ofPushMatrix();
        ofTranslate(-400,800);
        waves02.draw();
        ofPopMatrix();

        ofPushMatrix();
        ofTranslate(0,800);
        waves01.draw();
        ofPopMatrix();

        ofPushMatrix();
        ofTranslate(400,800);
        waves03.draw();
        ofPopMatrix();
    }
    
    if (ofGetFrameNum() > 1200 && ofGetFrameNum() <= 1800) {
        
        ofPushMatrix();
        ofTranslate(-400,0);
        waves02.draw();
        ofPopMatrix();

        ofPushMatrix();
        ofTranslate(0,0);
        waves01.draw();
        ofPopMatrix();

        ofPushMatrix();
        ofTranslate(400,0);
        waves03.draw();
        ofPopMatrix();
    }
    
    if (ofGetFrameNum() > 1800) {
        
        ofPushMatrix();
        ofTranslate(-400,0);
        waves02.draw();
        ofPopMatrix();
        
        ofPushMatrix();
        ofTranslate(400,0);
        waves03.draw();
        ofPopMatrix();
        
        ofPushMatrix();
        ofTranslate(0,800);
        waves01.draw();
        ofPopMatrix();
    }
    
//    ofPushMatrix();
//    ofSetColor(44, 255, 1);
//    myfont.drawString("EXPERIMENTATION 01      10/04/22", 10,15);
//    myfont.drawString("BY <SALLY MALLAT>", 10,25);
//
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
