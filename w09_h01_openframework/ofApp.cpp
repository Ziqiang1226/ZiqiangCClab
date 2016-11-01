#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    mPos = ofVec2f(ofGetWindowWidth()/2,ofGetWindowHeight()/2);
    mradius = 50;
    mVelocity = ofVec2f(0);
    mAcceleration = ofVec2f(0);
    mFriction = 0.99;
}

//--------------------------------------------------------------
void ofApp::update(){
    mPos+= mVelocity;
    mVelocity *= mFriction;
    
    if(mPos.x > ofGetWindowWidth()){
        mradius /= 1.3;
        mPos.x = 0;
    }
    
    if(mPos.x < 0){
        mPos.x = ofGetWindowWidth();
    }
    
    if(mPos.y > ofGetWindowHeight()){
        mPos.y = 0;
    }
    
    if(mPos.y < 0){
        mPos.y = ofGetWindowHeight();
    }
    
    if(mradius<5){
        mradius= 50;
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(ofColor(0,0,0,0));
    //ofDrawCircle(100, 100, mradius);
    ofDrawCircle(mPos, mradius);
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
    
    ofVec2f mousePos = ofVec2f(x,y);
    cout<<"mouse pos is "+ ofToString(mousePos)<<endl;
    
    mAcceleration = mPos - mousePos;
    float vecLength = mAcceleration.length();
//    mAcceleration /= vecLength;
    cout<<"mAcceleration is "+ ofToString(mAcceleration)<<endl;
    
    mVelocity+= mAcceleration;
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
