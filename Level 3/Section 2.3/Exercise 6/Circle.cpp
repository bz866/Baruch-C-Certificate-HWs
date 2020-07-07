
#include "Circle.hpp"
#include "Point.hpp"
#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;

Circle::Circle() : centerpt(0, 0), radius(0) {} //Default Constructor 

Circle::Circle(const Circle& circle) : centerpt(circle.centerpt), radius(circle.radius) {} //Copy Constructor

Circle::Circle(const Point& centerpt, const double& radius) : centerpt(centerpt), radius(radius) {} // The constructor that accepts center point and the radius 

Circle::~Circle(){}; //Destructor

Point Circle::C() const{
	return centerpt;
}

// Getters
double Circle::r() const{
	return radius;
}

// setters
void Circle::C(const Point& new_centerpt){
	centerpt = new_centerpt;
}

void Circle::r(const double& new_radius){
	radius = new_radius;
}

// Calculators
double Circle::Diameter() const {
	double diameter = 2.0 * radius;
	return diameter; 
}

double Circle::Area() const {
	double area = M_PI * pow(radius, 2);
	return area;
}

double Circle::Circumference() const {
	double circumsference = 2.0 * M_PI * radius;
	return circumsference;
}

// circle information to stringstream
string Circle::ToString() const {
	stringstream ss;
	ss << "Center: " << centerpt.ToString() << "," << "Radius: " << radius;
	return ss.str();
}



