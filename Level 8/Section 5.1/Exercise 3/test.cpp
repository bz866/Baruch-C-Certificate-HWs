#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "Visitor.hpp"
#include <boost/variant.hpp>
#include <iostream>

using namespace std;
using boost::variant;
typedef variant<Point, Line, Circle> ShapeType;

ShapeType CreateShape() {
	/*
	create a shape based on keyboard input
	*/
	ShapeType output;

	cout << "Enter the shape to create, p: Point, c: Circle, l: Line" << endl;
	char type;
	cin >> type;

	switch (type) {
		case 'p':{
			cout << "Enter x and y for the point: " << endl;
			int x, y;
			cin >> x >> y;
			output = Point(x, y);
			break;
		}
		case 'c':{
			int x, y, r;
			cout << "Enter x and y for the center:" << endl;
			cin >> x >> y;
			cout << "Enter the radius: " << endl;
			cin >> r;
			output = Circle(Point(x, y), r);
			break;
		}
		case 'l':{
			int x1, y1, x2, y2;
			cout << "Enter x and y for the start point: " << endl;
			cin >> x1 >> y1;
			cout << "Enter x and y for the end point: " << endl;
			cin >> x2 >> y2;
			output = Line(Point(x1, y1), Point(x2, y2));
			break;
		}
		default: 
			cerr << "Invalid Shape type." << endl;
	}

	return output;
}

int main(int argc, char const *argv[])
{
	
	ShapeType stVrt = CreateShape();
	cout << stVrt << endl;
	
	Line l; // try to get the line
	try {
		l = boost::get<Line>(stVrt);
	}
	catch (boost::bad_get& err) {
		cout << "Error: the variant doesn't contain a Line object" << endl;
	}


	Visitor v(10, 10);

	cout << "Shifting the shape variant using the Visitor, after shifting:  " << endl;
	boost::apply_visitor(v, stVrt);
	cout << stVrt << endl;

	return 0;
}





