#ifndef PointArray_HPP
#define PointArray_HPP

#include "Array.cpp"
#include "Point.hpp"

using namespace std;

class PointArray : public Array<Point> {
public: 
	PointArray();
	PointArray(int theSize);
	PointArray(const PointArray& source);
	virtual ~PointArray();

	PointArray& operator = (const PointArray& source);

	double Length() const; // the total length between the points in the array

};

#endif