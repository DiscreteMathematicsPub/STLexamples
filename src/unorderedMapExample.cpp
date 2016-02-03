/*
 * unorderedMapExample.cpp
 *
 *  Created on: 2 febr. 2016
 *      Author: roure
 */

#include <iostream>
#include <unordered_map>
#include <string>
#include "Element.h"
#include "common.h"
using namespace std;

template <class T>
void printUnorderedMapReference (const unordered_map<string, T> &l) {
	for (auto &elem : l) {
		cout << elem.first << ", " << *elem.second << endl;  // we are getting a std::pair<string, Element *>
	}
	cout << endl;
}



void elementPointerUnorderedMapExample () {

	/*******************************************************
	 *  Unordered map of pointers to elements
	 ******************************************************/
	Element a("name A", 1);

	Element * one = new Element("One", 5);
	Element * two = new Element("Two", 3);
	Element * three = new Element("Three", 6);


	unordered_map <string, Element *> le;

	// insert elements
	le.insert(pair<string, Element *>(one->getName(), one));
	le.insert(pair<string, Element *>(two->getName(), two));

	// insert elements (like associative arrays)
	le[three->getName()] = three;
	le[a.getName()] = &a;

	printUnorderedMapReference(le);

	cout << "Accessing element one: " << *le["One"] << endl;


	cout << endl << endl;
	//must be in separated lines
	delete one;
	delete two;
	delete three;

	cout << "adeu" << endl << endl;

}



