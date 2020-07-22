#include "Shape.hpp"

using namespace std;

Shape::Shape() {
	m_id = rand(); // initialize the id using a random number
}// default constructor

Shape::Shape(const Shape& source) {
	m_id = source.m_id;
}// copy constructor

Shape::~Shape() {} // default destructor

Shape& Shape::operator = (const Shape& source) {
	if (this != &source) {
		m_id = source.m_id;
	}
	return *this;
}

string Shape::ToString() const {
	stringstream ss;
	ss << "ID: " << m_id << endl;
	return ss.str();
}

int Shape::ID() const {
	return m_id;
}

