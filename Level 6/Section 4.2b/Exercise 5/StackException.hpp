#ifndef StackException_HPP
#define StackException_HPP

#include <sstream>

using namespace std;

class StackException {
public:

	StackException() {};
	virtual ~StackException() {};

	virtual string GetMessage() const = 0;

};

#ifndef StackFullException_HPP
#include "StackFullException.hpp"
#endif 

#ifndef StackEmptyException_HPP
#include "StackEmptyException.hpp"
#endif

#endif