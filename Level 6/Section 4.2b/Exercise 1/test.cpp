#include "Array.cpp" // for template, include the source file but the header file
#include "Point.hpp"
#include <iostream>
#include <string>

#include "ArrayException.hpp"

using namespace std;

int main(int argc, char const *argv[]){

	Array<int> intArray1;
	Array<int> intArray2;
	Array<double> doubleArray;

	cout << intArray1.DefaultSize() << endl; // 10 default size
	cout << intArray2.DefaultSize() << endl; // 10 default size
	cout << doubleArray.DefaultSize() << endl; // 10 default size
	
	intArray1.DefaultSize(15);
	
	cout << intArray1.DefaultSize() << endl; // 15 
	cout << intArray2.DefaultSize() << endl; // 15
	cout << doubleArray.DefaultSize() << endl; // 10
	// static variable is commonly shared by all instances of a same type of class,
	// int arrays are two instances of one type of class, so that they have the same default size
	// double array is an instance of another type of class, so its default size is not modified  
}