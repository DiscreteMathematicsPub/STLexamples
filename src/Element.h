/*
 * Element.h
 *
 *  Created on: 28 gen. 2016
 *      Author: roure
 */

#ifndef ELEMENT_H_
#define ELEMENT_H_

#include <string>
using namespace std;

class Element {
public:
	Element();
	Element(string n, double v);
	Element(const Element & e); //copy constructor

	virtual ~Element();

	void setValue(double v);
	double getValue() const;
	string getName() const;

	friend std::ostream & operator<<(std::ostream & Str, Element const & e); // this is a friend function. It doesn't belong to the class
	Element & operator=(Element const &e);
	bool operator<(Element const &e);

private:
	string name;
	double * value; //a pointer just to complicate things. Fine as an example
};


/*
 * This is a class that we will use to compare two Elements
 * Useful for the priority queue
 */
//

class ElementComparison
{
  bool reverse;
public:
  ElementComparison(const bool& revparam=false)
    {reverse=revparam;}
  bool operator() (const Element * lhs, const Element * rhs) const
  {
    if (reverse) return (lhs->getValue() > rhs->getValue());
    else return (lhs->getValue() < rhs->getValue());
  }
};


#endif /* ELEMENT_H_ */
