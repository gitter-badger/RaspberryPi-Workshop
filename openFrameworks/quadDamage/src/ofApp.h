#pragma once

#include "ofMain.h"
#include "BaseSprite.h"
#include "ofxQuad.h"

#define NUM_QUADS 4

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        BaseSprite          *root;
        ofxQuad             *quad1;
        vector<ofxQuad *>   quads;
        vector<string>      filenames;
};
