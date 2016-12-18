#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    img.load("1.jpg");
    
    ofBackground(120);
    planet01.setup("Sun");
    planet02.setup("Earth");
    planet03.setup("Moon");
    planet04.setup("Mars");

    
    planetGroups.add(planet01.planetGroup);
    planetGroups.add(planet02.planetGroup);
    planetGroups.add(planet03.planetGroup);
    planetGroups.add(planet04.planetGroup);
    
    gui.setup(planetGroups);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    planet01.update();
    planet02.update();
    planet03.update();
    planet04.update();

}

//--------------------------------------------------------------
void ofApp::draw(){
    img.draw(-50,-50,ofGetWindowWidth(),ofGetWindowHeight());
    
    ofSetCircleResolution(50);
    
    ofPolyline curve1;
    ofPolyline curve2;
    ofPolyline curve3;
    
    
    curve1.arc(ofGetWindowWidth()/2,ofGetWindowHeight()/2, 300, 301, 0, 360, 100);
    curve3.arc(ofGetWindowWidth()/2,ofGetWindowHeight()/2, 200, 201, 0, 360, 100);


    ofSetColor(251, 102, 76);
    curve1.draw();
    ofSetColor(88, 178, 255);
    curve3.draw();
    
    
    gui.draw();
    
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    planet01.draw();
    planet04.draw();

    ofTranslate(planet01.posX, planet01.posY);
    planet02.draw();
    curve2.arc(planet02.posX, planet02.posY, 20, 21, 0, 360, 100);
    curve2.draw();

    
    ofTranslate(planet02.posX, planet02.posY);
    planet03.draw();
    

    
    
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
