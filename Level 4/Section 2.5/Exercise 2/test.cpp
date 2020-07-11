#include "Point.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){

	Point** arrPoints = new Point*[3]; // create an array of Point pointers with 3 elements on the heap
	// Point* arrPoints[3];

	// create for each element in the array a point on the heap
	for (int i = 0; i < 3; ++i) {
		cout << "Enter x and y for Point " << i + 1 << endl;
		int x, y;
		cin >> x >> y;
		arrPoints[i] = new Point(x, y);
	}

	// iterate the array and print each point in the array
	cout << "All elements in the array: " << endl;
	for (int i = 0; i < 3; ++i) {
		cout << "Point : " << *(arrPoints[i]) << endl;
	}

	// iterate the array again and delete each point in the array
	cout << "Delete all the elements in the array." << endl;
	for (int i = 0; i < 3; ++i) {
		delete arrPoints[i];
	}

	// delete the array
	cout << "delete the array" << endl;
	delete[] arrPoints;

	return 0;
}