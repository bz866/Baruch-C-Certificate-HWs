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
	Point(double xval, double yval); // constructor that accept two values for initialization
	Point( const Point &obj); // copy constructor
	~Point(); // destructor

	// Getters 
	double X() const;
	double Y() const;

	// Setters Inline
	void X(double newxval) {x = newxval;}
	void Y(double newyval) {y = newyval;}


	// information as stringstream
	string ToString() const;

	//Distance calculators
	const double Distance() const; // distance to the origin (0, 0)
	const double Distance(const Point& p) const; // distance between two points. 
};

// ** Inline ** Getters
inline double Point::X() const {return x;} 
inline double Point::Y() const {return y;}


#endif