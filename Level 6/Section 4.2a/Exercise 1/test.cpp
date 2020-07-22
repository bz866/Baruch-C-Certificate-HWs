#include "Array.cpp" // for template, include the source file but the header file
#include "Point.hpp"
#include <iostream>
#include <string>

#include "ArrayException.hpp"

using namespace std;

int main(int argc, char const *argv[]){

	Array<Point> points(3);

	for (int i = 0; i < 3; ++i) {
		points[i] = Point(i, i);
	}

	for (int i = 0; i < 3; ++i) {
		cout << points[i] << endl;
	}

	return 0;
}