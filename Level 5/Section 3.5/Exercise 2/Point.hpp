#ifndef Point_HPP
#define Point_HPP

#include "Shape.hpp"

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Point : public Shape{
private:
	double x, y;

public:
	Point(); 
	Point(double xval, double yval); // constructor that accept two values for initialization
	Point(const Point &source); // copy constructor
	virtual ~Point(); // destructor

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

	// overloaded operators
	Point operator - () const; // Negate the coordinates
	Point operator * (double factor) const; // Scale the coordinates
	Point operator + (const Point& p) const; // Add coordinates
	bool operator == (const Point& p) const; // Equally compare operator
	Point& operator = (const Point& source); // Assignment operator
	Point& operator *= (double factor); // Scale the coordinates & assign
	// Point information as ostream
	friend ostream& operator << (ostream& os, const Point& p);
};

// ** Inline ** Getters
inline double Point::X() const {return x;} 
inline double Point::Y() const {return y;}

#endif