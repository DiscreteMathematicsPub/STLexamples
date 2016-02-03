/*
 * Element.cpp
 *
 *  Created on: 28 gen. 2016
 *      Author: roure
 */

#include <iostream>
#include "Element.h"


Element::Element(string n, double v) {
	name = n;
	value = new double;
	*value = v;
	std::cout << "two parameter constructor " << name << endl;
}


Element::Element() {
	name = "";
	value = new double(0);
	std::cout << "default constructor " << name << endl;
}


Element::Element(const Element & e) { //copy constructor
	name = "Copied " + e.name;
	value = new double;
	*value = *e.value;
	std::cout << "copy constructor " << name << std::endl;
}


Element::~Element() {
	std::cout << "Freeing value " << name << std::endl;
	delete value;
}

void Element::setValue(double v) {
	*value = v;
}

double Element::getValue() const {
	return *value;
}

string Element::getName() const {
	return name;
}

// a = b. The a corresponds to "this" and b is passed as parameter to the operator
Element & Element::operator=(Element const &e) {
	if (this != &e)  {
		delete value;
		value = new double;
		*value = *e.value;
		name = "Assigment " + e.name;
	}

	return *this;
}

// a < b. The a corresponds to "this" and b is passed as parameter to the operator
bool Element::operator<(Element const &e) {
	cout << "this " << *this->value << "  e: " << *e.value << endl;
	return *(this->value) < *e.value;
}



// don't know why but must be declared outside the class. Otherwise, it seems not to recognize parameters
std::ostream & operator<<(std::ostream & Str, Element const & e) {
  Str << e.name;
  return Str;
}



