#include "Point.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){

	// Test Point operators
	int x1, y1, x2, y2;
	cout << "Enter values for x1, y1:\n" << endl;
	cin >> x1 >> y1;
	cout << "Enter values for x2, y2:\n" << endl;
	cin >> x2 >> y2;
	
	Point *p1 = new Point(); // default constructor
	p1->X(x1); // set coordinates by setters
	p1->Y(y1);
	cout << "P1: " << *(p1) << endl;
	Point *p2 = new Point(x2, y2); // constructor with coordinates
	cout << "P2: " << *(p2) << endl;
	delete p2;
	p2 = new Point( *(p1) ); // copy constructor
	cout << "P2 copied from p1: " << *(p2) << endl;

	cout << "Distance between p1 and p2: " << (p1->Distance( *(p2) )) << endl;

	delete p1;
	delete p2;

	cout << "Now initilize an array of points" << endl;
	cout << "Enter the size of the array: " << endl;
	int arrSize;
	cin >> arrSize;
	
	// Point arrPoints[arrSize]; // initialize the array on stack, compile error in C99 for using variable as the size
	Point* ptrArrPoints = new Point[arrSize]; // create array on the heap using new, Only default constructor can be used
	delete[] ptrArrPoints;

	cout << "(Note:) Only default constructor can be used in creating array in the heap." << endl;

	return 0;
}