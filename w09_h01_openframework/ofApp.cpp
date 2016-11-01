#include "ofApp.h"
#include <math.h>

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(100);
    mradius = 5;
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    
    
    
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(ofColor(0,0,0,0));
    float a= ofRandom(-1.5, 1.5);
    float r= ofRandom(100);
    float x= ofRandom(ofGetWindowWidth()/2-r, ofGetWindowWidth()/2+r);
    float y= a* sqrt(pow(r, 2)-pow(x-ofGetWindowWidth()/2, 2))+ ofGetWindowHeight()/2;
    ofSetColor(0,0,255);
    ofDrawCircle(ofGetWindowWidth()/2, ofGetWindowHeight()/2, 100);
    ofSetColor(255);
    ofDrawCircle(x, y, mradius);
    ofDrawLine(x, y, ofGetWindowWidth()/2, ofGetWindowHeight()/2);
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}
//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
    
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

