#include "PointArray.hpp"

using namespace std;

// Note: if we specified the template argument in the header, then we dont need to use Array<Point>::xxx here 
// Array::xxx will be enough
PointArray::PointArray() : Array() {} 

PointArray::PointArray(int theSize) : Array(theSize) {}

PointArray::PointArray(const PointArray& source) : Array(source) {}

PointArray::~PointArray() {}

PointArray& PointArray::operator = (const PointArray& source) {
	if (this != &source){
		Array<Point>::operator = (source);
	}
	return *this;
}

double PointArray::Length() const {
	double length = 0.0;

	for (int i = 0; i < Array::Size() - 1; ++i) {
		length += ( Array::operator[](i).Distance( Array::operator[](i+1) ) );
	}
	return length;
} // the total length between the points in the array

