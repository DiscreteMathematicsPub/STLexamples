#include <iostream>
#include <queue>
#include "Element.h"
#include "common.h"
using namespace std;


void elementPointerPriorityQueueExample () {

	/*******************************************************
	 *  Priority queue of pointers to elements
	 ******************************************************/
	Element a("name A", 1);

	Element * one = new Element("One", 5);
	Element * two = new Element("Two", 3);
	Element * three = new Element("Three", 6);


	priority_queue<Element *, vector<Element *>, ElementComparison> le;
	le.push(one);
	le.push(two);
	le.push(three);
	le.push(&a);

	//le.top()->setValue(0);  //we shouldn't change the element value since the queue wouldn't be in correct order any more

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
