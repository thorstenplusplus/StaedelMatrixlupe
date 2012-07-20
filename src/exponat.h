/*
 *  exponat.h
 *  emptyExample
 *
 *  Created by Firstness on 18.07.12.
 *  Copyright 2012 __MyCompanyName__. All rights reserved.
 *
 */

	static int counter = 0;

#include "ofMain.h"
class Exponat{
public:
	
	Exponat() {
	
		index = counter;
		counter++;
	}	
	
	

	
	unsigned int index;
	ofImage *thumbnail;
	ofImage *Hauptbild;
};