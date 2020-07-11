#include "Array.hpp"

Array::Array(){
	//default 10 Points in the class
	size = 10;
	m_data = new Point[size];
}

Array::Array(const int theSize){
	size = theSize;
	m_data = new Point[size];
}

Array::Array(const Array& source){
	size = source.size;
	// m_data = source.m_data; // softcopy, two object share the same array of objects
 	m_data = new Point[size]; 
	for (int i = 0; i < size; ++i) {
		m_data[i] = source.m_data[i];
	}
}

Array::~Array(){
	cout << "Destructor called" << endl;
	delete[] m_data;
	// size = 0;
}

Array& Array::operator = (const Array& source) {
	if (this != &source) {
		delete[] m_data;

		size = source.size;
		// m_data = source.m_data; // softcopy, two object share the same array of objects
		m_data = new Point[size];
		for (int i = 0; i < size; ++i) {
			m_data[i] = source.m_data[i];
		}
	}
	return *this;
}

// index setter
Point& Array::operator [](int idx) {
	if (idx >= size) {
		return m_data[0];
	}

	return m_data[idx];
}

// index getter
const Point& Array::operator [](int idx) const {
	if (idx >= size) {
		return m_data[0];
	}

	return m_data[idx];
}

// Getters
int Array::Size() const{
	return size;
}

Point& Array::GetElement(int idx) const{
	if (idx >= size) {
		return m_data[0];
	}

	return m_data[idx];
}

// Setter
void Array::SetElement(int idx, const Point& p) {
	if (idx >= size) {
		return;
	}
	m_data[idx] = p;
	return;
}



