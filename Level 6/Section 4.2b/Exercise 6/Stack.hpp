#ifndef Stack_HPP
#define Stack_HPP

#include "Array.cpp"
#include "StackException.hpp"

using namespace std;

template <typename T, int size>
class Stack {
private:

	int m_current;
	Array<T> m_data;

public:

	Stack();
	// Stack(int theSize); // replaced by using an int value as template variable
	Stack(const Stack<T, size>& source);
	virtual ~Stack();

	Stack<T, size>& operator = (const Stack<T, size>& source);
	void Push(const T& val);
	T& Pop();

};

#endif