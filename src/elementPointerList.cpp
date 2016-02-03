#include <iostream>
#include <list>
#include "Element.h"
#include "common.h"
using namespace std;

template <class T>
void printListReference (const list<T> &l) {
	for (auto &elem : l) {
		cout << *elem << ", ";  // note pointer notation (* means contents of pointer)
	}
	cout << endl;
}

template <class T>
void printListNoReference (const list<T> &l) {
	for (auto elem : l) {
		cout << *elem << ", "; //note pointer notation (* means contents of pointer)
	}
	cout << endl;
}

void elementPointerListExample () {

	/*******************************************************
	 *  List of pointers to elements
	 ******************************************************/
	Element a("name A", 9.0);

	Element * one = new Element("One", 1);
	Element * two = new Element("Two", 2);
	Element * three = new Element("Three", 3);

	list<Element *> le = {one, two, three};
	le.push_back(&a);

	cout << endl << endl;
	printListReference(le);

	cout << endl << endl;

	printListNoReference(le);

	cout << endl << endl;
	//must be in separated lines
	delete one;
	delete two;
	delete three;

	cout << "adeu" << endl << endl;

}
