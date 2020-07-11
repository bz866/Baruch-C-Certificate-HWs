#include "Line.hpp"
#include "Point.hpp"
#include <sstream>
#include <cmath>
using namespace std;

Line::Line() : startpt(0, 0), endpt(0, 0) {} //Default Constructor

Line::Line(const Point& startpt, const Point& endpt) : startpt(startpt), endpt(endpt) {} //Constructor with a start- and end-point

Line::Line(const Line& line){
	startpt = line.startpt;
	endpt = line.startpt;
} //copy constructor

Line::~Line(){} //destructor

// Getters
const Point& Line::start(){
	return startpt;
}

const Point& Line::end(){
	return endpt;
}

// Setters
void Line::start(const Point& new_startpt){
	startpt = new_startpt; 
}

void Line::end(const Point& new_endpt) {
	endpt = new_endpt;
}

// line information as stringstream
string Line::ToString() const
{
	stringstream ss; 
	ss << "The start point is " << startpt.ToString() << "\n"; 
	ss << "The end point is " << endpt.ToString() << "\n";
	return ss.str();
}

//Calculate the length of the line, which is same as the distance of the start point and the end point
double Line::Length() const{
	double length = startpt.Distance(endpt);
	return length;
}

// Overloaded Operators
Line Line::operator - () const {
	return Line(-startpt, -endpt);
}

Line Line::operator * (double factor) const {
	return Line(startpt * factor, endpt * factor);
}

Line Line::operator + (const Line& l) const {
	return Line(l.startpt + startpt, l.endpt + endpt);
}

bool Line::operator == (const Line& l) const {
	return (l.startpt == startpt, l.endpt == endpt) ? true : false;
}

Line& Line::operator = (const Line& sourceLine) {
	if (this != &sourceLine) {
		startpt = sourceLine.startpt;
		endpt = sourceLine.endpt;
	}
	return *this;
}

Line& Line::operator *= (double factor) {
	startpt *= factor;
	endpt *= factor;
	return *this;
}

// Line information as output stream
ostream& operator << (ostream& os, const Line& l){
	os << "(ostream) " << l.ToString() << endl;
	return os;
}





