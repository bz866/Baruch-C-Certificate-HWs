#ifndef Line_HPP
#define Line_HPP

#include "Point.hpp"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Line{
private:
	Point startpt, endpt;

public:
	Line();
	Line(const Point& startpt, const Point& endpt); //Constructor with a start- and end-point
	Line(const Line& line); //copy constructor

	~Line();

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

};


#endif

