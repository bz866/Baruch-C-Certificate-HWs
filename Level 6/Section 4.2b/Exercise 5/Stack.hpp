#ifndef Stack_HPP
#define Stack_HPP

#include "Array.cpp"
#include "StackException.hpp"

using namespace std;

template <typename T>
class Stack {
private:

	int m_current;
	Array<T> m_data;

public:

	Stack();
	Stack(int theSize);
	Stack(const Stack<T>& source);
	virtual ~Stack();

	Stack<T>& operator = (const Stack<T>& source);
	void Push(const T& val);
	T& Pop();

};

#endif