#ifndef Shape_HPP
#define Shape_HPP

#include <iostream>
#include <stdlib.h>
#include <sstream>

using namespace std;

class Shape {
private:
	int m_id;
public: 
	Shape();
	Shape(const Shape& source);
	// ~Shape(); // if not virtual, only the base destructor will be called 
	virtual ~Shape();

	Shape& operator = (const Shape& source);
	virtual string ToString() const; 
	int ID() const; // get ID
};

# endif