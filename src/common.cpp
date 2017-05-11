/*
 * common.cpp
 *
 *  Created on: 1 febr. 2016
 *      Author: roure
 */

#include <iostream>
#include <list>
#include "Element.h"
using namespace std;


void printScreenObject(Element e) {
	cout << "Print screen object:  ";
	cout << e.getName() << endl;
}

void printScreenReference(Element &e) {
	cout << "Print screen reference:  ";
	cout << e.getName() << endl;
}




