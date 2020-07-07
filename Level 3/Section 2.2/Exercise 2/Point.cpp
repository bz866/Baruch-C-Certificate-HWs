#include "Point.hpp"
#include <sstream>
#include <cmath>
using namespace std;

// Getters
double Point::GetX(){
	return x;
}
 
double Point::GetY(){
	return y;
}

// Setters
void Point::SetX(double newxval){
	x = newxval;
}

void Point::SetY(double newyval){
	y = newyval;
}

string Point::ToString(){
	/*
	Print out Point information
	*/
	stringstream ss; 
	ss << "Point(" << x << ", " << y << ")"; //Convert doubles into string with stringstream
	return ss.str();
}

double Point::DistanceOrigin(){
	/*
	Calculate the distance to the origin (0, 0).
	*/
	double distance = sqrt(pow(x, 2) + pow(y, 2)); //Eucilidean distance

	return distance;
}

 double Point::Distance(Point p){
 	/*
 	Calculate the distance between two points.
 	*/
 	double distance = sqrt(pow((x - p.x), 2) + pow((y - p.y), 2));
 	return distance;
 }
