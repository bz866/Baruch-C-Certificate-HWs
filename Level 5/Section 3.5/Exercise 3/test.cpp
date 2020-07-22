#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){

	Shape* shapes[3];
	shapes[0]=new Shape;
	shapes[1]=new Point;
	shapes[2]=new Line;
	
	for (int i=0; i!=3; i++) delete shapes[i];
	/*
	1. Without using 'virtual', only the destructor of the base class will be called
	
	2. With 'virtual' before the definition of the destructor of the base class, the proper destructors are called now.
	Since Point and Line are also derive classes of Shape, the destructor of Shape is also called in deleting Point, deleting Line, and deleting the Points in the Line. 
	*/
}