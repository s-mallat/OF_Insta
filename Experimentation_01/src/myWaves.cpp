//
//  myWaves.cpp
//  MathInMotion
//
//  Created by Sally Mallat on 09/04/2022.
//

#include "myWaves.hpp"


myWaves::myWaves() {
    
}

void myWaves::setup() {
    
    
}

//--------------------------------------------------------------
void myWaves::update() {
    
}

//--------------------------------------------------------------
void myWaves::draw() {
    theta = theta + .03;
    amplitude = 200;
    frequency = 0.01;
    
    
    ofPushMatrix();
// Waves
    ofFill();
    
    time = ofGetElapsedTimef();
    
    //ofSetLineWidth(2);
    //ofSetColor(10 * time, 20 * time , 237);
    ofSetLineWidth(3.5);
    ofSetColor(0);
    
// Sine Wave
    for (int i = 0; i < ofGetWindowWidth(); i++) {
        translate = amplitude * sin(i * frequency + time);
        ofDrawCircle(ofGetWidth()/2 + translate,
                     i * sin(tan(i) * 0.08 + time),
                     100 * sin(tan(i)*0.01));
    }

// Cosine Wave
    for (int i = 0; i < ofGetWindowWidth(); i++) {
        ofDrawCircle(ofGetWidth()/2 + amplitude * cos(i * frequency + time),
                     i * sin(tan(i) * 0.08 + time),
                     100 * sin(tan(i)*0.01));
    }
    ofPopMatrix();
    
    ofPushMatrix();
    ofFill();
    //ofSetLineWidth(3);
    ofSetColor(255);
    
    // Sine Wave
        for (int i = 0; i < ofGetWindowWidth(); i++) {
            translate = amplitude * sin(i * frequency + time);
            ofDrawCircle(ofGetWidth()/2 + translate,
                         i * sin(tan(i) * 0.08 + time),
                         300 * sin(0.01));
        }

    // Cosine Wave
        for (int i = 0; i < ofGetWindowWidth(); i++) {
            ofDrawCircle(ofGetWidth()/2 + amplitude * cos(i * frequency + time),
                         i * sin(tan(i) * 0.08 + time),
                         300 * sin(0.01));
        }
    
    ofPopMatrix();
    
    ofPushMatrix();
    ofNoFill();
    ofSetLineWidth(5);
    ofSetColor(255);
    
    // Sine Wave
        for (int i = 0; i < ofGetWindowWidth(); i++) {
            translate = amplitude * sin(i * frequency + time);
            ofDrawCircle(ofGetWidth()/2 + translate,
                         i * sin(tan(i) * 0.08 + time),
                         300 * sin(0.01));
        }

    // Cosine Wave
        for (int i = 0; i < ofGetWindowWidth(); i++) {
            ofDrawCircle(ofGetWidth()/2 + amplitude * cos(i * frequency + time),
                         i * sin(tan(i) * 0.08 + time),
                         300 * sin(0.01));
        }
    
    ofPopMatrix();
    
}

