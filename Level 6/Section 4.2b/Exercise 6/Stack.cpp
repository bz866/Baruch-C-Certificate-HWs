#ifndef Stack_CPP
#define Stack_CPP

#include "Stack.hpp"

template <typename T, int size>
Stack<T, size>::Stack() : m_current(0), m_data(Array<T>(size)) {}

// template <typename T> // replaced by using an int value as template variable
// Stack<T, size>::Stack(int theSize) : m_current(theSize), m_data(Array<T>(theSize)) {}

template <typename T, int size>
Stack<T, size>::Stack(const Stack<T, size>& source) : m_current(source.m_current), m_data(source.m_data) { 
	// data container will call the copy constructor of the Array
}

template <typename T, int size>
Stack<T, size>::~Stack() {}

template <typename T, int size>
Stack<T, size>& Stack<T, size>::operator = (const Stack<T, size>& source) {
	if (this != &source) {
		delete m_data;
		m_current = source.m_current;
		m_data = source.m_data; // call the copy constructor of the Array
	}
	return *this;
}

template <typename T, int size>
void Stack<T, size>::Push(const T& val) {
	try {
		m_data[m_current] = val;
		++m_current; 
	} // m_current will not get increment if indicing is not succeed
	catch (ArrayException &arrEx) {
		throw StackFullException();
	}
}

template <typename T, int size>
T& Stack<T, size>::Pop() {
	try {
		T val2Return = m_data[m_current - 1]; // if invalid index then catch exception
		--m_current; 
		return m_data[m_current]; // otherwise return element on top
	}
	catch (ArrayException &arrEx) {
		throw StackEmptyException();
	}
}

#endif