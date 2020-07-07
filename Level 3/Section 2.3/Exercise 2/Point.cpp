#include "Point.hpp"
#include <sstream>
#include <cmath>
using namespace std;

Point::Point(double xval, double yval)
{
	cout << "Default constructor is called! \n" <<endl;

	x = xval;
	y = yval;
}

Point::Point(const Point &obj){ // copy constructor
	cout << "**Copy constructor is called! \n" << endl;

	x = obj.x;
	y = obj.y;
}

Point::~Point() {
	cout << "Destructor is working to free memory!\n" << endl;
}

// Getters
double Point::GetX(){
	return x;
}
double Point::GetY(){
	return y;
}

// point information as stringstream
string Point::ToString(){
	stringstream ss; 
	ss << "Point(" << x << ", " << y << ")"; 
	return ss.str(); 
}

// distance to the origin (0, 0).
const double Point::DistanceOrigin(){
	double distance = sqrt(pow(x, 2) + pow(y, 2)); //Eucilidean distance
	return distance;
}

// distance between two points.
const double Point::Distance(const Point& p){
	double distance = sqrt(pow((x - p.x), 2) + pow((y - p.y), 2));
	return distance;
}

