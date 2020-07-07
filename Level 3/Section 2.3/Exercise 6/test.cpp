#include "Circle.hpp"
#include "Point.hpp"
#include <iostream>
#include <string>

using namespace std;


int main(int argc, char const *argv[]){
	double x_center, y_center, radius;

	// Initalization
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

	return 0;
}