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
	Point(const Point &obj); // overloaded copy constructor
	~Point();

	// Getters
	double GetX(); 
	double GetY(); 

	// print inforamtion by stringstream
	string ToString();

	// Distance calculators
	double DistanceOrigin(); // distance to the origin
	double Distance(Point p); // distance between two points
};


#endif