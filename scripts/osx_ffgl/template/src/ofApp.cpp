#include "ofApp.h"

#include "ofxFFGLPlugin.h"

// adjust the line in project "build phases" -> "run script"
// cp -rf "$TARGET_BUILD_DIR/$PRODUCT_NAME.bundle" /Applications/Resolume\ Arena\ 4.1.1/plugins/vfx
// if your host app is different

ofApp::ofApp(){
    
    //Add FFGL parameters here
    
    //Examples
    /*
    numRepeats = 1;
    
    addFloatParameter( "num repeats",	// name of parameter ( as it will appear in host )
                       &numRepeats,     // address of the float this parameter will point to
                       1,				// minimum value
                       20				// maximum value
                       );
    
    */
}

//--------------------------------------------------------------
void ofApp::setup(){
    
    // Unfortunately, while running as a plugin the data path root is referred to the host and not to plugin executable.
    // Currently, the data folder is copied into Resources on build. See Build Phases/Copy Phase for more.
    
    // To access these files, use the following path.
    //ofSetDataPathRoot("../../../plugins/vfx/ofxPluginEffectTest080.bundle/Contents/Resources/data/");
    
    //Add any OpenFrameworks setup code below

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
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
