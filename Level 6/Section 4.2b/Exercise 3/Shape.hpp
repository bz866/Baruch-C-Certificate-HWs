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
	void Print() const; // print derive class using ToString()

	// the pure virtual member function(PVMF), detailed implementation in derive classes. the PVMF makes the Shape as an abstract class(ABC)
	// not possible to create an instance of Shape anymore
	virtual void Draw() const = 0; // empty implementation
};

# endif