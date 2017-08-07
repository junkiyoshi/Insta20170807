#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);
	ofBackground(0);
	ofSetBackgroundAuto(false);
	ofSetWindowTitle("Insta");

	ofEnableBlendMode(ofBlendMode::OF_BLENDMODE_ADD);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	int angle_step = 30;

	ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);

	//ofPushMatrix();

	//ofSetLineWidth(0.3);
	//ofSetColor(32);
	//for (int i = 0; i < 360; i += angle_step) {
	//	ofRotate(angle_step);
	//	ofLine(ofVec2f(0, 0), ofVec2f(ofGetWidth(), 0));
	//}

	//ofPopMatrix();

	ofSetLineWidth(1);
	ofSetColor(255);
	if (ofGetMousePressed()) {
		float mouseX = ofGetMouseX() - ofGetWidth() / 2;
		float mouseY = ofGetMouseY() - ofGetHeight() / 2;
		float pre_mouseX = ofGetPreviousMouseX() - ofGetWidth() / 2;
		float pre_mouseY = ofGetPreviousMouseY() - ofGetHeight() / 2;
		
		for (int i = 0; i < 360; i += angle_step) {
			ofRotate(angle_step);
			
			ofLine(ofVec2f(mouseX, mouseY), ofVec2f(pre_mouseX, pre_mouseY));
			ofLine(ofVec2f(-mouseX, mouseY), ofVec2f(-pre_mouseX, pre_mouseY));
		}

		cout << "mouseX = " << mouseX << " mouseY = " << mouseY << endl;
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 'c') {
		ofBackground(0);
	}
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
