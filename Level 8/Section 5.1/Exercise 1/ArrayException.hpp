#ifndef ArrayExceptinon_HPP
#define ArrayExceptinon_HPP

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class ArrayException {
public:
	ArrayException(){};
	virtual ~ArrayException(){};

	virtual string GetMessage() const = 0;
};

#endif 