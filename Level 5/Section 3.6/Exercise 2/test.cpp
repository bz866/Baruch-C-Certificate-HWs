#include "Array.hpp"
#include "Point.hpp"
#include <iostream>
#include <string>

#include "ArrayException.hpp"

using namespace std;

int main(int argc, char const *argv[]){

	Array arr(3);

	// arr[-1] = Point(0, 0); // invalid index; "libc++abi.dylib: terminating with uncaught exception of type int" with 'throw -1'
	// arr[3] = Point(0, 0); // invalid index; "libc++abi.dylib: terminating with uncaught exception of type int" with 'throw -1'
	int idx = 1;
	try {
		arr[idx] = Point(0, 0); // valid index 1
	}
	catch (ArrayException& exArr) {
		cout << exArr.GetMessage() << endl;;
	}

	idx = -1;
	try {
		arr[idx] = Point(0, 0); //invalid index -1
	}
	catch (ArrayException& exArr) {
		cout << exArr.GetMessage() << endl;
	}
	try {
		arr.SetElement(idx, Point(0, 0)); //invalid index -1
	}
	catch (ArrayException& exArr) {
		cout << exArr.GetMessage() << endl;
	}
	try {
		arr.GetElement(idx); //invalid index -1
	}
	catch (ArrayException& exArr) {
		cout << exArr.GetMessage() << endl;
	}

	return 0;
}