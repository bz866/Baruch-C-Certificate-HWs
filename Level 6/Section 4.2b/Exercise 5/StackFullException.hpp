#ifndef StackFullException_HPP
#define StackFullException_HPP

#include "StackException.hpp"

using namespace std;

class StackFullException : public StackException {
public:
	StackFullException() : StackException() {};
	virtual ~StackFullException() {};

	string GetMessage() const {
		stringstream ss;
		ss << "Stack is Full Exception." << endl;
		return ss.str();
	}
};

#endif 