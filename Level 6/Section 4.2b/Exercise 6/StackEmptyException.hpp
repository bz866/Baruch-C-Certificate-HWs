#ifndef StackEmptyException_HPP
#define StackEmptyException_HPP

#include "StackException.hpp"

using namespace std;

class StackEmptyException : public StackException {
public:
	StackEmptyException() : StackException() {}
	virtual ~StackEmptyException() {};

	string GetMessage() const {
		stringstream ss;
		ss << "Stack is Empty Exception." << endl;
		return ss.str();
	}
};

#endif