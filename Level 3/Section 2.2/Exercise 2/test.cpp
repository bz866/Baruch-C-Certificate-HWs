
#include "Point.hpp"
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]){

	double x1, y1, x2, y2;
	// Default Initialization
	Point pt1; 
	Point pt2; 
	// Get coordinates from the keyboard input
	cout << "Enter the x and y for Point 1:\n";
	cin >> x1 >> y1;
	pt1.SetX(x1);
	pt1.SetY(y1);

	cout << "Enter the x and y for Point 2:\n";
	cin >> x2 >> y2; 
	pt2.SetX(x2);
	pt2.SetY(y2);

	// points information by stringstream
	cout << "Point One: "<< pt1.ToString() << "\n" << endl;
	cout << "Point Two: "<< pt2.ToString() << "\n" << endl;

	// points information by cout
	cout << "(cout) x1: " << pt1.GetX() << "\n" << endl;
	cout << "(cout) y1: " << pt1.GetY() << "\n" << endl;
	cout << "(cout) x2: " << pt2.GetX() << "\n" << endl;
	cout << "(cout) y2: " << pt2.GetY() << "\n" << endl;

	// distance to the origin
	cout << "The distance betwen the Point One and the origin (0,0) is " << pt1.DistanceOrigin() << "\n" <<endl;
	cout << "The distance betwen the Point Two and the origin (0,0) is " << pt2.DistanceOrigin() << "\n" <<endl;

	// distance between two points
	cout << "The distance between " << pt1.ToString() << " and " << pt2.ToString() << " is: " << pt1.Distance(pt2) << endl;
	return 0;
}



