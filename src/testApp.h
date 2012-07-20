#pragma once

#include "ofMain.h"
#include "exponat.h"

class testApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
	
	vector < Exponat* > exponateListe; //initialisiert eine Liste von Pointern der Sorte Exponat
	vector < ofImage* > Bilderpool;
	ofImage Img0;
	ofImage Img1;
	ofImage Img2;
	ofImage Img3;
	ofImage Img4;
	ofImage Img5;
	
	float sinwave[150];
	float coswave[150];
	int matrixelementeX;
	int matrixelementeY;
	
};
