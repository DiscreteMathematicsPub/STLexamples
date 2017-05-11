#include <iostream>
#include <list>
#include "Element.h"
#include "common.h"
using namespace std;

template <class T>
void printListReference (const list<T> &l) {
	for (auto &elem : l) {
		cout << elem << ", ";
	}
	cout << endl;
}

template <class T>
void printListNoReference (const list<T> &l) {
	for (auto elem : l) {
		cout << elem << ", ";
	}
	cout << endl;
}

void elementListExample () {

	/*******************************************************
	 *  List of elements. All objects in a list are going to be copied and thus should be copyable
	 ******************************************************/
	Element a("name A", 9.0);

	list<Element> le = {Element("One",1), Element("Two", 2), Element("Three",3)};
	le.push_back(a);

	cout << endl << endl;
	printListReference(le);

	cout << endl << endl;
	printListNoReference(le);

	cout << "bye bye" << endl << endl;

}
