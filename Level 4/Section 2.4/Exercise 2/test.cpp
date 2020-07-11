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

	cout << p1 << endl;
	cout << p2 << endl;

	// line
	cout << "Create the line using Point1 and Point2: " << endl;
	Line line = Line(p1, p2);
	cout << line << endl;

	return 0;
}