#ifndef IncompatibleSizeException_HPP
#define IncompatibleSizeException_HPP

#include "ArrayException.hpp"

using namespace std;

class IncompatibleSizeException : public ArrayException{

public:
	IncompatibleSizeException() : ArrayException() {};
	virtual ~IncompatibleSizeException() {};

	string GetMessage() const {
		stringstream ss;
		ss << "Sizes of arrays are not compatible." << endl;
		return ss.str();
	}

};

#endif 