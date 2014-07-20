#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    const string textLinesFilename = "textLines.xml";

    ofBackground(127, 127, 127);
    ofSetFrameRate(30);
    ofSetVerticalSync(true);
    ofEnableAlphaBlending();


    textLines.loadFile(textLinesFilename);

#ifdef FTGLES
    // For FTGLES
    font.loadFont("SourceSansPro-Black.otf", 72, true, true);        
#else
    font.loadFont("SourceSansPro-Black.otf", 72);        
#endif

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255, 0, 0);
    font.drawString("Hello world!", 0, 200);

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
