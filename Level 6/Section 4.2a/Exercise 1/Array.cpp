#ifndef Array_CPP
#define Array_CPP

#include "Array.hpp"

template <typename T>
Array<T>::Array() : size(10), m_data(new T[size]){
	//default 10 Points in the class
}

template <typename T>
Array<T>::Array(const int theSize) : size(theSize), m_data(new T[size]){}

template <typename T>
Array<T>::Array(const Array<T>& source){
	size = source.size;
	// m_data = source.m_data; // softcopy, two object share the same array of objects
 	m_data = new T[size]; 
	for (int i = 0; i < size; ++i) {
		m_data[i] = source.m_data[i];
	}
}

template <typename T>
Array<T>::~Array(){
	// cout << "Destructor called" << endl;
	delete[] m_data;
	// size = 0;
}

template <typename T>
Array<T>& Array<T>::operator = (const Array<T>& source) {
	if (this != &source) {
		delete[] m_data;

		size = source.size;
		// m_data = source.m_data; // softcopy, two object share the same array of objects
		m_data = new T[size];
		for (int i = 0; i < size; ++i) {
			m_data[i] = source.m_data[i];
		}
	}
	return *this;
}

// index setter
template <typename T>
T& Array<T>::operator [](int idx) {
	if (idx >= size || idx < 0) {
		throw OutOfBoundsException(idx);
	}

	return m_data[idx];
}

// index getter
template <typename T>
const T& Array<T>::operator [](int idx) const {
	if (idx >= size || idx < 0) {
		throw OutOfBoundsException(idx);
	}

	return m_data[idx];
}

// Getters
template <typename T>
int Array<T>::Size() const{
	return size;
}

template <typename T>
T& Array<T>::GetElement(int idx) const{
	if (idx >= size || idx < 0) {
		throw OutOfBoundsException(idx);
	}

	return m_data[idx];
}

// Setter
template <typename T>
void Array<T>::SetElement(int idx, const T& p) {
	if (idx >= size || idx < 0) {
		throw OutOfBoundsException(idx);
	}
	m_data[idx] = p;
	return;
}

#endif


