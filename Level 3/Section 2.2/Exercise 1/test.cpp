#include "Point.hpp"
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]){

	double x, y;

	// Get coordinates from keyboard
	cout << "Enter values for x, y:\n";
	cin >> x >> y; 

	Point pt; // Default Initialization
	
	// Set x, y
	pt.SetX(x);
	pt.SetY(y);

	//Print Point's information
	cout << pt.ToString() << "\n" << endl;

	// Print information by Getters
	cout << "(cout) x= " << pt.GetX() << "\n" << endl;
	cout << "(cout) y= " << pt.GetY() << "\n" << endl;

	return 0;
}



