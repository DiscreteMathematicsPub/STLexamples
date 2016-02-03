/*
 * stackExample.cpp
 *
 *  Created on: 1 febr. 2016
 *      Author: roure
 */
#include <iostream>
#include <stack>
#include "Element.h"
#include "common.h"
using namespace std;

/*
 *   Stack has not the Iterator defined!!!!
 *
template <class T>
void printStack (const stack<T> &l) {
	for (auto elem : l) {
		cout << *elem << ", "; //note pointer notation (* means contents of pointer)
	}
	cout << endl;
}
*/

void elementPointerStackExample () {

	/*******************************************************
	 *  Stack of pointers to elements
	 ******************************************************/
	Element a("name A", 9.0);

	Element * one = new Element("One", 1);
	Element * two = new Element("Two", 2);
	Element * three = new Element("Three", 3);

	stack<Element *> le;
	le.push(one);
	le.push(two);
	le.push(three);
	le.push(&a);

	le.top()->setValue(25);

	//printStack(le);       //NOT POSSIBLE. It doesn't have iterators
	//cout << endl;

	while (!le.empty()) {
		cout << *(le.top()) << ", " << le.top()->getValue() << endl;
		le.pop(); // note that it returns void
	}


	cout << endl << endl;
	//must be in separated lines
	delete one;
	delete two;
	delete three;

	cout << "adeu" << endl << endl;

}




