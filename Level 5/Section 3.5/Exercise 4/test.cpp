#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){

	// Create an instance of Shape
	// Shape s; // NOT POSSIBLE for shape is now an abstract base class

	// shape initialization
	Shape* shapes[10];
	shapes[0] = new Line;
	shapes[1] = new Point;
	shapes[2] = new Circle;
	shapes[3] = new Point(0,0);
	shapes[4] = new Point(1,1);
	shapes[5] = new Point(100,100);
	shapes[6] = new Line(Point(0, 0), Point(1,1));
	shapes[7] = new Circle(Point(5,5), 5);
	shapes[8] = new Circle(Point(0,0), 5);
	shapes[9] = new Line(Point(1.0, 2.5), Point(3.4, 5.2));
	// Draw
	for (int i = 0; i != 10; ++i) shapes[i]->Draw(); 
	// delete all shapes
	for (int i = 0; i != 10; ++i) delete shapes[i];

	return 0;
}