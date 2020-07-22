#ifndef Stack_CPP
#define Stack_CPP

#include "Stack.hpp"

template <typename T>
Stack<T>::Stack() : m_current(0) {}

template <typename T>
Stack<T>::Stack(int theSize) : m_current(0), m_data(Array<T>(theSize)) {}

template <typename T>
Stack<T>::Stack(const Stack<T>& source) : m_current(source.m_current), m_data(source.m_data) { 
	// data container will call the copy constructor of the Array
}

template <typename T>
Stack<T>::~Stack() {}

template <typename T>
Stack<T>& Stack<T>::operator = (const Stack<T>& source) {
	if (this != &source) {
		delete m_data;
		m_current = source.m_current;
		m_data = source.m_data; // call the copy constructor of the Array
	}
	return *this;
}

template <typename T>
void Stack<T>::Push(const T& val) {
	m_data[m_current] = val;
	++m_current; 
	// m_current will not get increment if indicing is not succeed
}

template <typename T>
T& Stack<T>::Pop() {
	T val2Return = m_data[m_current - 1]; // if invalid index then catch exception
	--m_current; 
	return m_data[m_current]; // otherwise return element on top
}

#endif