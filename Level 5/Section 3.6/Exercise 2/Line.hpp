#ifndef Line_HPP
#define Line_HPP

#include "Shape.hpp"
#include "Point.hpp"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Line : public Shape{
private:
	Point startpt, endpt;

public:
	Line();
	Line(const Point& startpt, const Point& endpt); //Constructor with a start- and end-point
	Line(const Line& source); //copy constructor

	virtual ~Line();

	// Getters Set by Const Reference
	const Point& start(); 
	const Point& end();

	// Setters Pass by reference
	void start(const Point& new_startpt); 
	void end(const Point& new_endpt); 

	// line information as stringstream
	string ToString() const;

	//Line Length Calculator
	double Length() const;

	//operators
	Line operator - () const; // Negate the coordiantes, Swap start point and the end Point
	Line operator * (double factor) const; // Scale the coordinates
	Line operator + (const Line& l) const; // Add coordinates
	bool operator == (const Line& l) const; // Equally compare operator 
	Line& operator = (const Line& source); // Assignment operator
	Line& operator *= (double factor); // Scale the coordinates & assign
	friend ostream& operator << (ostream& os, const Line& l);

	void Draw() const; // draw a line from the start point to the end point
};

#endif

