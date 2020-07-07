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
	Point(double xval, double yval);
	Point( const Point &obj); // overloaded copy constructor
	~Point(); 

	// Getters
	double GetX();
	double GetY(); 

	// Point information as stringstream
	string ToString();

	// Distance calculators
	const double DistanceOrigin(); // distance to the origin
	const double Distance(const Point& p); // distance between two points
};

#endif