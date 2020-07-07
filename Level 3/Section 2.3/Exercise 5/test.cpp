#include "Point.hpp"
#include "Line.hpp"
#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[]){
	double x1, y1, x2, y2;
	//Ask coordinates values from the keyboard
	cout << "Enter x and y for the start point: \n" << endl;
	cin >> x1 >> y1;
	cout << "Enter x and y for Point 2: \n" << endl;
	cin >> x2 >> y2;
	Point startpt(x1, y1);
	Point endpt(x2, y2);

	// set up the line with start point and the end point, pass by reference
	Line line(startpt, endpt);

	//Test the getter that return by const reference, which only return the reference of the object but the copy of the object
	Point refstartpt(line.start());
	cout << refstartpt.X();
	cout << refstartpt.Y();

	refstartpt.X(100.0);
	cout << refstartpt.X();
	cout << refstartpt.Y();
	cout << line.start().X();
	cout << line.start().Y();

	// line information
	cout << "The description of the line:  "<< line.ToString() << "\n" << endl;
	// line length
	cout << "The length of the line is " << line.Length() << "\n" <<endl;

	return 0;
}
