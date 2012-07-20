#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	
    // aha
    
	matrixelementeX =120;
	matrixelementeY =80;
	//Exponat *neuesExponat = new Exponat();
	//exponateListe.push_back(neuesExponat);
	for (int i=0; i<matrixelementeX*matrixelementeY; i++) {
		exponateListe.push_back( new Exponat() );//new gibt pointer zurŸck
	}
	
	
	ofImage *p0 = &Img0;
	Img0.loadImage("bild0.png");
	//Bilderpool.push_back( p0 );
	
	ofImage *p1 = &Img1;
	Img1.loadImage("bild1.png");
	//Bilderpool.push_back( p1 );
	
	ofImage *p2 = &Img2;
	Img2.loadImage("bild2.png");
	//Bilderpool.push_back( p2 );
	
	ofImage *p3 = &Img3;
	Img3.loadImage("bild3.png");
	//Bilderpool.push_back( p3 );
	
	ofImage *p4 = &Img4;
	Img4.loadImage("bild4.png");
	//Bilderpool.push_back( p4 );
	
	ofImage *p5 = &Img5;
	Img5.loadImage("bild5.png");
	//Bilderpool.push_back( p5 );
	
	for (int i=0; i<matrixelementeX*matrixelementeY/6; i++) {
		Bilderpool.push_back( p0 );
		Bilderpool.push_back( p1 );
		Bilderpool.push_back( p2 );
		Bilderpool.push_back( p3 );
		Bilderpool.push_back( p4 );
		Bilderpool.push_back( p5 );
	}
	
	
	
	
	//LoadImageSequenz
//	
//	for(int i=0; i< 250; i++) {
//		string zeros = "";
//		if(i<1000) zeros += "0";
//		if(i<100) zeros += "0";
//		if(i<10) zeros += "0";
//		string file = "images/London_Thorsten_G_fuer_Mr_Oizo_"+ zeros + ofToString(i) + ".jpg";
//		ImageSequenz[i].loadImage(file);
//	}

	//Sinus berechnen
		for (int i = 0; i < matrixelementeX; i++) {
		float amount = ofMap((float) i, 0.0f, 120.0f, 0.0f, PI);
		sinwave[i] = abs(sin(amount));
	}
	//Cosinus berechnen
	for (int i = 0; i < matrixelementeX; i++) {
		float amount = ofMap((float) i, 0.0f, 120.0f, 0.0f, PI);
		coswave[i] = -(cos(amount));
	}
	
	
	
//    Bilderpool.push_back( Img1.loadImage("bild1.png") );
//	Bilderpool.push_back( Img2.loadImage("bild2.png") );
//	Bilderpool.push_back( Img3.loadImage("bild3.png") );
//	Bilderpool.push_back( Img4.loadImage("bild4.png") );
//	Bilderpool.push_back( Img5.loadImage("bild5.png" );
	
	
	//exponateListe.push_back( new Exponat() ); //new Exponat erzeugt eine Instanz von Exponat, in unserem Vector gibt es aber nur Pointer der sorte Exponat, also wird in die Liste derPointer auf die Frischer zeugte Instanz von Exponat gespeichert.
//	exponateListe.push_back( new Exponat() );
//	exponateListe.push_back( new Exponat() );
//	exponateListe.push_back( new Exponat() );
//	delete exponateListe.back();// delete verfolgt den pointer und lšscht das Objekt
//	exponateListe.pop_back(); // lšscht den pointer
//	//exponateListe.push_back( new Exponat() );
	
}

//--------------------------------------------------------------
void testApp::update(){
	
	
	
}

//--------------------------------------------------------------
void testApp::draw(){
	ofBackground(0,0, 0);
	int sagmal = (int) exponateListe.size();
	ofSetColor(255,255,255);
	
	Bilderpool[0]->draw(0,0);
	ofDrawBitmapString(ofToString(sagmal), 20, 20);
	
	for(int i=0; i<exponateListe.size(); i++) {
		
		//ofDrawBitmapString(ofToString(exponateListe[i]->index), 40, 40+i*20);
	}	
	ofSetColor(200, 200, 200);
	
	for(int i=0; i<matrixelementeX*80; i++) {
		
		float xlupe = coswave[i%matrixelementeX]*450;
		float ylupe = coswave[i/matrixelementeX]*450;
		
		//ofCircle(200+(i%matrixelementeX),200+(i/matrixelementeX),200, 5); //sinwave[i%matrixelementeX]+sinwave[i/matrixelementeX]
		//ofCircle(200+(i%matrixelementeX)*5+xlupe,200+(i/matrixelementeX)*5+ylupe,sinwave[i%matrixelementeX]+sinwave[i/matrixelementeX], 5); //sinwave[i%matrixelementeX]+sinwave[i/matrixelementeX]
		ofCircle(770+xlupe,450+ylupe, 4); //sinwave[i%matrixelementeX]+sinwave[i/matrixelementeX]
		
		
		
	}
		
	int MatrixCoordX = CLAMP((mouseX-200)/10,0,matrixelementeX-1);
	int MatrixCoordY = CLAMP((mouseY-50)/10,0,matrixelementeY-1);
	
	ofDrawBitmapString(ofToString(MatrixCoordX), 20, 800);
	ofDrawBitmapString(ofToString(MatrixCoordY), 20, 820);
	ofDrawBitmapString(ofToString(ofGetFrameRate()), 20, 840);
	
	
	ofSetColor(255, 255, 255);
	//Bilderpool[MatrixCoordX+MatrixCoordY*120]->draw(0,0);
	
	
	
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}