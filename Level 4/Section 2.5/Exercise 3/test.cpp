#include "Array.hpp"
#include "Point.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){

	Array arrdefault = Array();
	for (int i = 0; i < arrdefault.Size(); ++i) {
		arrdefault[i] = Point(i, i);
	}

	cout << "Default Array and all elements: " << endl;
	for (int i = 0; i < arrdefault.Size(); ++i) {
		cout << arrdefault[i] << endl;
	}

	Array arr5 = Array(5);
	for (int i = 0; i < arr5.Size(); ++i) {
		arr5.SetElement(i, Point(i, i));
	}

	cout << "5 Size Array and all elements: " << endl;
	for (int i = 0; i < arr5.Size(); ++i) {
		cout << arr5.GetElement(i) << endl;
	}

	cout << "Assign arr5 elements to default array idx 5-9" << endl;
	for (int i = 0; i < arr5.Size(); ++i) {
		arrdefault[i+5] = arr5[i];
	}
	cout << "Default Array and all elements: " << endl;
	for (int i = 0; i < arrdefault.Size(); ++i) {
		cout << arrdefault[i] << endl;
	}

	Array arr5copied = Array(arr5);
	cout << "Copied arr5 to arr5copied" << endl;
	cout << "scale arr5copied elements by 2, Point *= 2" << endl;
	for (int i = 0; i < arr5copied.Size(); ++i) {
		arr5copied[i] *= 2;
	}
	cout << "After scaling, element are:" << endl;
	cout << "5 Size Array and all elements: " << endl;
	for (int i = 0; i < arr5.Size(); ++i) {
		cout << arr5.GetElement(i) << endl;
	}
	cout << "Copied 5 Size Array and all elements: " << endl;
	for (int i = 0; i < arr5copied.Size(); ++i) {
		cout << arr5copied.GetElement(i) << endl;
	}

	// arrdefault.~Array();
	// arr5copied.~Array();
	// arr5.~Array();


}