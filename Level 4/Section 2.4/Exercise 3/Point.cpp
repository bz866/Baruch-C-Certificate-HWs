#include "Point.hpp"
#include <sstream>
#include <cmath>
using namespace std;

Point::Point(){
	cout <<"Default constructor is called! \n" << endl;
}

Point::Point(const Point &obj){ // the constructor is implicitly used as conversion operator
	cout << "**Copy constructor is called! \n" << endl;
	x = obj.x;
	y = obj.y;
}

Point::Point(double xval, double yval){ // The constructor that accepts x and y values
	cout << "The constructor that accepts x and y values is called! \n" <<endl;
	x = xval;
	y = yval;
}

Point::Point(double val) {
	cout << "The single double constructor is called. \n" << endl;
	x = val;
	y = val;
}

Point::~Point(){
	cout << "Destructor is working to free memory!\n" << endl;
}

// information as stringstream
string Point::ToString() const
{
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
const double Point::Distance(const Point& p) const {
	double distance = sqrt(pow((x - p.x), 2) + pow((y - p.y), 2));
	return distance;
}

// Overloaded operators
Point Point::operator - () const {
	// Negate the coordinates
	return Point(-x, -y);
}

Point Point::operator * (double factor) const {
	// Scale the coordinates
	return Point(x * factor, y * factor);
}

Point Point::operator + (const Point& p) const {
	return Point(x + p.x, y + p.y);
}

bool Point::operator == (const Point& p) const {
	return (p.x == x && p.y == y) ? true : false;
}

Point& Point::operator = (const Point& source) {
	if (this != &source) {
		x = source.x;
		y = source.y;
	} 
	return *this;
}

Point& Point::operator *= (double factor) {
	x *= factor;
	y *= factor;
	return *this;
}

// Point information as output stream
ostream& operator << (ostream& os, const Point& p){
	os << "(ostream) " << p.ToString() << endl;
	return os;
}










