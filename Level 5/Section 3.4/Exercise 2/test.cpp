#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){

	Shape s; // create shape
	
	Point p(10, 20); // create point
	Line l(Point(1,2), Point(3, 4)); // create line
	
	cout << s.ToString() << endl; // print shape
	cout << p.ToString() << endl; // print point
	cout << l.ToString() << endl; // print line
	
	cout << "Shape ID: " << s.ID() << endl; // ID of the shape
	cout << "Point ID: "<< p.ID() << endl; // ID of the point, Does this work?   // Yes, all base functions are available in the derived class
	cout << "Line ID: " << l.ID() << endl; // ID of the line. Does this work? // Yes, all base functions are available in the derived class
	
	Shape* sp; // create pointer to a shape variable
	sp=&p; // Point in a shape variable. Possible?  // Yes, but we can only use base functions
	cout << sp->ToString() << endl; // What is printed? // call the ToString() function in the base(Shape) class. "ID: xxx"
	
	Point p2; // Create and copy Point p to new point.
	p2=p; 
	cout << p2 << ", " << p2.ID() << endl; // Is the ID copied if you do not call the base class assignment in point? // No, If the base class assignment is not called , the shape data will not be copied 
}