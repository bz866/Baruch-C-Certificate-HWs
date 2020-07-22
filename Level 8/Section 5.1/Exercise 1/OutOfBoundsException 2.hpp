#ifndef OutOfBoundsException_HPP
#define OutOfBoundsException_HPP

#include "ArrayException.hpp"

using namespace std;

class OutOfBoundsException : public ArrayException {
private: 
	int code;

public:
	OutOfBoundsException(int errCode) : ArrayException(), code(errCode) {};
	virtual ~OutOfBoundsException(){};

	string GetMessage() const {
		stringstream ss;
		ss << "Index " << code << " is out of bounds." << endl;
		return ss.str();
	}


};

#endif