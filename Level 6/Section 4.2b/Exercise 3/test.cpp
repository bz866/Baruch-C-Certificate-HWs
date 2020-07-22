#include "PointArray.hpp" // for template, include the source file but the header file
#include "ArrayException.hpp"
#include "Point.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){

	PointArray arrPointDefault;
	cout << arrPointDefault.Size() << endl;
	for (int i = 0; i < arrPointDefault.Size(); ++i) cout << arrPointDefault[i] << endl; // test default constructor

	PointArray arrPointDefined(5);
	for (int i = 0; i < arrPointDefined.Size(); ++i) {
		arrPointDefined[i] = Point(0, i);
		cout << arrPointDefined[i]; // test indicing
	}

	PointArray arrPointDistanceTest(5);
	arrPointDistanceTest = arrPointDefined; // test assignment operator
	for (int i = 0; i < arrPointDistanceTest.Size(); ++i) {
		cout << arrPointDistanceTest[i] << endl;
	}
	cout << arrPointDistanceTest.Length() << " == 4" << endl; // test .Length() 
}





