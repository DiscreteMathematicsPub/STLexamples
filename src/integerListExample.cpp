#include <iostream>
#include <list>
#include "Element.h"
#include "common.h"
using namespace std;

	template <class T>
	void printList (const list<T> &l) {
		for (auto &elem : l) {
			cout << elem << " ";
		}
		cout << endl;
	}

void integerListExample () {


	/*******************************************************
	 *  List of integers
	 ******************************************************/
	list<int> l = {1,2,3,4,5,6};
	l.push_back(7);

	cout << "Before:  ";
	printList (l);

	//The iterator copies the element list
	for (auto elem : l) {
		elem ++;
	}
	// observe that the list elements are NOT modified since the loop modifies the copy of the list element (not the element in the list)
	cout << "After:   ";
	printList(l);


	//The iterator copies the reference to the element.
	for (auto & elem : l) {
		elem ++;
	}
	//Observe that the list elements are modified since the loop modifies the referenced element (the one in the list)
	cout << "After &: ";
	printList(l);

	cout << endl << endl;
}


