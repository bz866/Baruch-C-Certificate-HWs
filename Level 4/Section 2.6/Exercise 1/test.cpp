#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "Array.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){

	// using full namespace
	BINQIANZENG::CAD::Point p1(1,1);
	BINQIANZENG::CAD::Point p2(2,2);
	cout << p1 << " " << p2 << " Points are created by calling full namespace. \n" << endl;

	// using declaration for single class
	using BINQIANZENG::CAD::Line;
	Line l(p1, p2);
	cout << l << " Line is created by calling declaration for a single class. \n" << endl;

	// using declaration for complete namespace
	using namespace BINQIANZENG::Containers;
	Array arr(3);
	for (int i = 0; i < arr.Size(); ++i) {
		arr[i] = BINQIANZENG::CAD::Point(i, i);
	}
	cout << arr << " Array is created by call declaration for a complete namespace. \n" << endl;

	// using alias to use Circle
	namespace BZCAD = BINQIANZENG::CAD;
	using BZCAD::Circle;
	Circle c(p1, 5);
	cout << c << " Circle is created by using alias namespace BZCAD. \n" << endl;

}