#include "Point.hpp"
#include <sstream>
#include <cmath>
using namespace std;

Point::Point(){
	cout <<"Default constructor is called! \n" << endl;
} //Default constructor without setting values

Point::Point(const Point &obj){
	cout << "**Copy constructor is called! \n" << endl;

	x = obj.x;
	y = obj.y;
}

Point::Point(double xval, double yval){
	cout << "The constructor that accepts x and y values is called! \n" <<endl;
	x = xval;
	y = yval;
}

Point::~Point(){
	cout << "Destructor is working to free memory!\n" << endl;
}

// Getters
double Point::X() const {
	return x;
}
double Point::Y() const{
	return y;
}

// Setters
void Point::X(double newxval){
	x = newxval;
}

void Point::Y(double newyval){
	y = newyval;
}

// information as stringstream
string Point::ToString() const{
	stringstream ss;
	ss << "Point(" << x << ", " << y << ")"; 
	return ss.str(); 
}

// distance to the origin (0, 0).
const double Point::Distance() const{
	double distance = sqrt(pow(x, 2) + pow(y, 2)); //Eucilidean distance
	return distance;
}

// distance between two points.
const double Point::Distance(const Point& p) const{
	double distance = sqrt(pow((x - p.x), 2) + pow((y - p.y), 2));
	return distance;
}
