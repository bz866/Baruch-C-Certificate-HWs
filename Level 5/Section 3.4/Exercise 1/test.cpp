#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){

	Line l; 
	/* 
	Using assignment constructor:
	- 2 Point default constructors are called
	- 2 Point constructors that accept values are called
	- 2 Point assignment operator = are called
	- 2 Point destructors are called after assignment
	- Another 2 Point destructors are called when the destructor of Line is called 

	Using the colon syntax:
	- 2 Point constructors that accept values are called 
	- 2 Point destructors are called when the destructor of Line is called

	Answer: Number of point constructor, destructor, and assignment calls is less than before.
	*/ 

	Circle c;
	/* 
	Using the colon syntax:
	- 1 Point constructor that accepts values is called 
	- 1 Point destructors is called when the destructor of Circle is called
	*/ 

}