#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    // STEP 3: Setup video grabber
    ofBackground(128);
    
    mCamWidth = 320;  // try to grab at this size.
    mCamHeight = 240;
    
    mVidGrabber.setDeviceID(0);
    mVidGrabber.setDesiredFrameRate(60);
    mVidGrabber.initGrabber(mCamWidth, mCamHeight);
    

    mGrayImage.allocate(mCamWidth, mCamHeight);
    mGrayBg.allocate(mCamWidth, mCamHeight);
    mGrayDiff.allocate(mCamWidth, mCamHeight);
    
    mThreshold = 80;
    mLearnBackground = true;
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    mVidGrabber.update();
    
    if (mVidGrabber.isFrameNew()) {
        
        mColorImg.setFromPixels(mVidGrabber.getPixels());
        
        mGrayImage = mColorImg;
        
        if (mLearnBackground == true){ // Need to update difference background
            mGrayBg = mGrayImage;
            mLearnBackground = false;
        }
        
        mGrayDiff.absDiff(mGrayBg, mGrayImage);
        mGrayDiff.threshold(mThreshold);
        
        mContourFinder.findContours(mGrayDiff, 20, (340*240)/3, 10, true);
        
        
        
        
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){


    mVidGrabber.draw(300, 300);
    
    for (int i = 0; i < mContourFinder.nBlobs; i++){
        
        // Draw text over the centroid if the blob is a hole
        //ofSetColor(255);
        if(mContourFinder.blobs[i].hole){
            ofDrawCircle(mContourFinder.blobs[i].boundingRect.getCenter().x + 300, mContourFinder.blobs[i].boundingRect.getCenter().y + 300, 3);
        }

    }
    
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
