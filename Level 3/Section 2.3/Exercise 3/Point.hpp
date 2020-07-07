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
	// In the function overloading question, using X() and Y() to set and get values
	Point(double xval, double yval); // constructor that accept two values for initialization
	Point( const Point &obj); // copy constructor
	~Point(); // destructor

	// Getters
	double X(); 
	double Y(); 

	// Setters
	void X(double newxval);
	void Y(double newyval);

	// point information as stringstream
	string ToString();

	//Distance calculators
	double Distance(); // distance to the origin (0, 0)
	double Distance(const Point& p); // distance between two points. 
};

#endif