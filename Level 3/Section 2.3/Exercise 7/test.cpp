
#include "Point.hpp"
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]){
	double x1, y1, x2, y2;

	// Points initialization
	cout << "Enter x and y for Point 1 (inline Setters): \n" << endl;
	cin >> x1 >> y1;
	Point pt1;
	pt1.X(x1);
	pt1.Y(y1);

	cout << "Enter x and y for Point 2 (inline Setters): \n" << endl;
	cin >> x2 >> y2;
	Point pt2;
	pt2.X(x2);
	pt2.Y(y2);

	// information as stringstream
	cout << "Point One: "<< pt1.ToString() << "\n" << endl;
	cout << "Point Two: "<< pt2.ToString() << "\n" << endl;

	cout << "(cout and inline getters) x1: " << pt1.X() << "\n" << endl; //GetX() and SetX() are renamed as X()
	cout << "(cout and inline getters) y1: " << pt1.Y() << "\n" << endl; //GetY() and SetY() are renamed as Y()
	cout << "(cout and inline getters) x2: " << pt2.X() << "\n" << endl; //GetX() and SetX() are renamed as X()
	cout << "(cout and inline getters) y2: " << pt2.Y() << "\n" << endl; //GetY() and SetY() are renamed as Y()

	//print out the distance between the point One and  the origin (0, 0).
	cout << "The distance betwen the Point One and the origin (0,0) is " << pt1.Distance() << "\n" <<endl;
	cout << "The distance betwen the Point Two and the origin (0,0) is " << pt2.Distance() << "\n" <<endl;

	//print out the distance between the point One and the Point Two
	cout << "The distance between " << pt1.ToString() << " and " << pt2.ToString() << " is: " << pt1.Distance(pt2) << endl;

	return 0;
}