#include "NumericArray.cpp" // for template, include the source file but the header file
#include "ArrayException.hpp"
#include "Point.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){

	NumericArray<double> nuArr1;
	cout << nuArr1.Size() << endl;

	nuArr1.DefaultSize(5);
	for (int i = 0; i < nuArr1.Size(); ++i) nuArr1[i] = 1; 

	NumericArray<double> nuArr2(5);
	for (int i = 0; i < nuArr2.Size(); ++i) nuArr2[i] = 2;

	NumericArray<double> nuArr3 = nuArr2;
	nuArr3 = nuArr3 * 2;
	for (int i = 0; i < nuArr2.Size(); ++i) cout << nuArr2[i] << endl;
	for (int i = 0; i < nuArr3.Size(); ++i) cout << nuArr3[i] << endl;

	double res1 = nuArr3.DotProduct(nuArr2);
	cout << res1 << endl;

	NumericArray<double> nuArr4 = nuArr3 + nuArr2;
	for (int i = 0; i < nuArr4.Size(); ++i) cout << nuArr4[i] << endl;

	try {
		nuArr1.DotProduct(nuArr4);
	}// dot product with incompitable size
	catch (ArrayException& arrExp){
		cout << arrExp.GetMessage() << endl;
	}

	NumericArray<Point> arrPoint1(5);
	NumericArray<Point> arrPoint2(5);
	for (int i = 0; i < arrPoint1.Size(); ++i) {
		arrPoint1[i] = Point(i, i);
		arrPoint2[i] = Point(i+5, i+5);
	}
	cout << "arrPoint1 " << endl;
	for (int i = 0; i < arrPoint1.Size(); ++i) cout << arrPoint1[i] << endl;
	cout << "arrPoint2 " << endl;
	for (int i = 0; i < arrPoint2.Size(); ++i) cout << arrPoint2[i] << endl;
	NumericArray<Point> arrPoint3(5);
	// for (int i = 0; i < arrPoint3.Size(); ++i) {
	// 	cout << arrPoint3[i];
	// 	arrPoint3[i] = arrPoint1[i] - arrPoint2[i]; // not valid for numerical array doesn't define '-' for elements 
	// 	cout << arrPoint3[i];
	// } // test operators defined in Point
	arrPoint3 = arrPoint1 + arrPoint2; 
	cout << "arrPoint3 " << endl;
	for (int i = 0; i < arrPoint3.Size(); ++i) cout << arrPoint3[i] << endl;
	
	NumericArray<Point> arrPointSum = arrPoint3 + arrPoint1;
	cout << "arrPointSum " << endl;
	for (int i = 0; i < arrPointSum.Size(); ++i) cout << arrPointSum[i] << endl;
	
	arrPointSum = arrPointSum * 2; 
	cout << "arrPointSum = arrPointSum * 2 " << endl;
	for (int i = 0; i < arrPointSum.Size(); ++i) cout << arrPointSum[i] << endl;
	
	NumericArray<Point> arrPointSumCopied = arrPointSum;
	cout << "arrPointSumCopied " << endl;
	for (int i = 0; i < arrPointSumCopied.Size(); ++i) cout << arrPointSumCopied[i] << endl;

	// test dot product between two numerical array of points
	// Not valid, compile-error for there is not defined multiplication between points
	// cout << "Dot Product of two arrays of points: " << arrPoint1.DotProduct(arrPoint2) << endl;


	// Answer: 
	// We can initialize an Numerical Array of Point, but we can only use operators that are defined in both 
	// the NumericArray and the Point.
	// '-', and '/' get compile-error for it is only defined in NumericArray
	// '.DotProduct()' gets compile-error for the multiplication between Points is not defined.
	// '+', '=', and '*' runs fines for it is defined in both the NumericArray and the Point
	// We can  only use the member functions that defined in both of the NumercArray and the Point. 
	// In conclusion, we assume that the template argument has appropriately defined operators that support
	// operations in the template
}





