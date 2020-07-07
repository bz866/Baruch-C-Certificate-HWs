#ifndef Point_HPP
#define Point_HPP

#include <iostream>
#include <cmath>
using namespace std;

class Point{
private:
	double x;
	double y; 

public:
	Point(){}; 
	~Point(){}; 

	// Getters
	double GetX();
	double GetY(); 

	// Setters
	void SetX(double newxval); 
	void SetY(double newyval);

	// distance calculators
	double DistanceOrigin(); // Calculate the distance to the origin (0, 0).
	double Distance(Point p); // Calculate the distance between two points.

	// print out point's information
	string ToString();
};

#endif 