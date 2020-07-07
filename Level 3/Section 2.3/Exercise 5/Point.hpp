#ifndef Point_HPP
#define Point_HPP

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Point{
private:
	double x, y;

public:
	Point();	
	Point(double xval, double yval); 
	Point( const Point &obj);
	~Point();

	// Getters
	double X() const;
	double Y() const;

	// Setters
	void X(double newxval);
	void Y(double newyval);

	// information as stringstream
	string ToString() const;

	//Distance calculators
	const double Distance() const; // distance to the origin (0, 0)
	const double Distance(const Point& p) const; //distance between two points. 
};


#endif