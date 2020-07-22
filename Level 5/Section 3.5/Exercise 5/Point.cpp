#include "Point.hpp"
#include <sstream>
#include <cmath>
using namespace std;

Point::Point() : Shape(), x(0), y(0) {
	// cout <<"Default constructor is called! \n" << endl;
}

// colon syntax
Point::Point(const Point &source) : Shape(source), x(source.x), y(source.y) {
	// cout << "**Copy constructor is called! \n" << endl;
}

Point::Point(double xval, double yval) : Shape(), x(xval), y(yval){
	// cout << "The constructor that accepts x and y values is called! \n" <<endl;
}

Point::~Point(){
	// cout << "Point Destructor is working to free memory!\n" << endl;
}

// information as stringstream
string Point::ToString() const
{
	string s = Shape::ToString(); // call the ToString() method of the base(Shape) class
	stringstream ss;
	ss << s << "; "<< "Point(" << x << ", " << y << ")"; 
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

Point& Point::operator = (const Point& source){
	Shape::operator = (source); // call the assignment operator of the base class
	if (this != &source) {
		x = source.x;
		y = source.y;
	} 
	cout << "Point the assignment operator = is called. " << endl;
	return *this;
}

Point& Point::operator *= (double factor) {
	x *= factor;
	y *= factor;
	return *this;
}

// Point information as output stream
ostream& operator << (ostream& os, const Point& p){
	os << "(ostream) " << "Point (" << p.x << " " << p.y << ")" << endl;
	return os;
}

void Point::Draw() const {
	cout << "Draw the " << this->ToString() << endl;
}






