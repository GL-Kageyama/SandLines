#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    ofSetWindowTitle("SandLines");
    ofSetBackgroundColor(206, 134, 10);
    ofSetBackgroundAuto(false);
    
    ofPoint start(0, ofGetHeight()/4);
    ofPoint end(ofGetWidth(), ofGetHeight()*3/4);
    ofPoint control1(ofGetWidth()/3, ofGetHeight()/3);
    ofPoint control2(ofGetWidth() - ofGetWidth()/2, ofGetHeight() - ofGetHeight()/5);
    
    spline = ofxSandLine(start, control1, control2, end);
    spline.setOffset(16);
    
    ofPoint start2(0, ofGetHeight()*3/4);
    ofPoint end2(ofGetWidth(), ofGetHeight()/3);
    ofPoint control1_2(ofGetWidth()/3, ofGetHeight()/3);
    ofPoint control2_2(ofGetWidth() - ofGetWidth()/4, ofGetHeight() - ofGetHeight()/2);
    
    spline2 = ofxSandLine(start2, control1_2, control2_2, end2);
    spline2.setOffset(20);
    
    ofPoint start3(0, ofGetHeight()*2/3);
    ofPoint end3(ofGetWidth(), ofGetHeight()*2/3);
    ofPoint control1_3(ofGetWidth()/2, ofGetHeight()/2);
    ofPoint control2_3(ofGetWidth() - ofGetWidth()/3, ofGetHeight() - ofGetHeight()/2);
    
    spline3 = ofxSandLine(start3, control1_3, control2_3, end3);
    spline3.setOffset(16);
    
    ofPoint start4(0, ofGetHeight());
    ofPoint end4(ofGetWidth(), ofGetHeight()/3);
    ofPoint control1_4(ofGetWidth()/4, ofGetHeight()/2);
    ofPoint control2_4(ofGetWidth() - ofGetWidth()/5, ofGetHeight() - ofGetHeight()/2);
    
    spline4 = ofxSandLine(start4, control1_4, control2_4, end4);
    spline4.setOffset(2s2);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //ofBackgroundGradient(ofColor(0), ofColor(100), OF_GRADIENT_CIRCULAR);
    
    spline.draw(4000);
    spline2.draw(4000);
    spline3.draw(4000);
    spline4.draw(4000);
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
