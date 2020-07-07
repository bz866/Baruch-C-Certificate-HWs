#include "Point.hpp"
#include <sstream>
#include <cmath>
using namespace std;

Point::Point(double xval, double yval){
	cout << "Default constructor is called! \n" <<endl;
	x = xval;
	y = yval;
}

// Overloaded Copy Constructor
Point::Point(const Point &obj){
	cout << "**Copy constructor is called! \n" << endl;
	x = obj.x;
	y = obj.y;
}

Point::~Point(){
	cout << "Destructor is working to free memory!\n" << endl;
}

// Getters
double Point::GetX(){
	return x;
}

double Point::GetY(){
	return y;
}

// print out information by stringstream
string Point::ToString(){
	stringstream ss; 
	ss << "Point(" << x << ", " << y << ")"; 
	return ss.str();  
}

// Distance to the origin
double Point::DistanceOrigin(){
	double distance = sqrt(pow(x, 2) + pow(y, 2)); //Eucilidean distance
	return distance;
}

// distance between points
double Point::Distance(Point p){
	double distance = sqrt(pow((x - p.x), 2) + pow((y - p.y), 2));
	return distance;
}
