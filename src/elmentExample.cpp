/*
 * tryElement.cpp
 *
 *  Created on: 1 febr. 2016
 *      Author: roure
 */
#include <iostream>
#include <list>
#include "Element.h"
#include "common.h"
using namespace std;

void elementExample () {

	/*************************************************************
	 * Element: copy constructor, operator <<, operator =
	 *************************************************************/
	Element a("name A", 9.0);
	Element b = a;  // calls copy constructor
	Element c; // calls default constructor
	Element &d = a; //it just copies the reference
	Element *e = new Element("name E", 9.0);  // we must explicitly delete this object before the program ends

	cout << endl;
	cout << "Just declared. A: " << a << ", B: " << b << ", C: " << c << ", D: " << d << endl;

	c = a; // Does NOT call copy constructor, calls the assignment operator

	cout << "After c = a    A: " << a << ", B: " << b << ", C: " << c << endl;

	printScreenObject(a); 		// calls copy constructor
	cout << endl;
	printScreenReference(a); 	// does NOT call copy constructor
	cout << endl << endl;


	cout << "bye bye" << endl << endl;

	//delete e;   //uncomment this line to avoid this memory leak
}



