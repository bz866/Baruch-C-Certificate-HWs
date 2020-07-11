#include "Circle.hpp"
#include "Line.hpp"
#include "Point.hpp"
#include <iostream>
#include <string>

using namespace std;


int main(int argc, char const *argv[]){

	// Test Point operators
	int x1, y1, x2, y2;
	cout << "Enter values for x1, y1:\n" << endl;
	cin >> x1 >> y1;
	cout << "Enter values for x2, y2:\n" << endl;
	cin >> x2 >> y2;
	Point p1 = Point(x1, y1);
	Point p2 = Point(x2, y2);

	cout << "Origin Point1:" << p1.ToString() << endl;
	cout << "Origin Point2:" << p2.ToString() << endl;

	Point p1negate = -p1;
	cout << "Negate Point1 :" << p1negate.ToString() << endl;
	Point p1scale2 = p1 * 2;
	cout << "Scale Point1 by 2: " << p1scale2.ToString() << endl;
	Point sump1p2 = p1 + p2;
	cout << "p1 + p2: " << sump1p2.ToString() << endl;
	// check equal
	Point p1Copied = p1;
	cout << "p1 == p1(copied): " << (p1 == p1Copied) << endl;
	cout << "p1 == p2: " << (p1 == p2) << endl;
	// check assignment
	p1 = p2;
	cout << "Assign p1 = p2, after assigning: Point1: " << p1.ToString() << endl;
	// check scale & assign
	p1 *= 2;
	cout << "Scale & assign p1 by 2: p1 *= 2, Point1: " << p1.ToString() << endl;
	// check chaining operators
	Point pChain;
	pChain = p2 *= 3;
	cout << "pChain = p2*= 3: " << pChain.ToString() << endl;


	// line
	cout << "Create the line using Point1 and Point2: " << endl;
	Line line = Line(p1, p2);
	cout << line.ToString() << endl;
	// test 
	Line lineNegate = - line;
	cout << "Negate the line: " << lineNegate.ToString() << endl;
	Line lineScale2 = line * 2;
	cout << "Scale line by 2: " << lineScale2.ToString() << endl;
	Line extraLine = Line(Point(0, 0), Point(1,1));
	cout << line.ToString() << " + " << extraLine.ToString() << " = " << (line + extraLine).ToString() << endl;
	Line lineCopied = line;
	cout << "line == line(copied): " << (line == lineCopied) << endl;
	cout << "line == extraLine: " << (line == extraLine) << endl;
	// check assignment
	line = extraLine;
	cout << "Assign extraLine to line, get line: " << line.ToString() << endl;
	// scale & assign
	line *= 3;
	cout << "Scale & assign line by 3, get line: " << line.ToString() << endl;
	// check chaining operators
	Line lChain;
	lChain = line *= 3;
	cout << "lChain = line *= 3: " << lChain.ToString() << endl;


	// Circle
	int x_center, y_center, radius;
	cout << "Enter x and y for the center point: \n" << endl;
	cin >> x_center >> y_center;
	cout << "Enter radius: \n" << endl;
	cin >> radius;
	// Set values
	Point centerpt(x_center, y_center);
	Circle circle(centerpt, radius);

	// circle information
	cout << "The description of the circle: " << circle.ToString() << "\n" << endl;
	cout << "The diameter of the circle: " << circle.Diameter() << "\n" << endl;
	cout << "The area of the circle: " << circle.Area() << "\n" << endl;
	cout << "The circumference of the circle: " << circle.Circumference() << "\n" << endl;

	// Test 
	Circle cScale2 = circle * 2;
	cout << "Scaled circle by 2: " << cScale2.ToString() << endl;
	Circle cCopied = circle;
	Circle extraCircle = Circle(Point(0,1), 10);
	cout << "circle == circle(copied) : " << (circle == cCopied) << endl;
	cout << "circle == extraCircle : " << (circle == extraCircle) << endl;
	// assign
	circle = extraCircle;
	cout << "assign extraCircle to circle, get circle : " << circle.ToString() << endl;
	// scale & assign
	circle *= 0.5;
	cout << "Scale & assign the circle by 0.5, get circle : " << circle.ToString() << endl;
	// chaining operators
	Circle cChain;
	cChain = circle *= 2;
	cout << "cChain = circle *= 2: " << cChain.ToString() << endl;

	return 0;
}