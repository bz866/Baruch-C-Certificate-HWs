#include "Array.hpp"
#include "Point.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){

	Array arr(3);

	// arr[-1] = Point(0, 0); // invalid index; "libc++abi.dylib: terminating with uncaught exception of type int" with 'throw -1'
	// arr[3] = Point(0, 0); // invalid index; "libc++abi.dylib: terminating with uncaught exception of type int" with 'throw -1'

	try {
		arr[1] = Point(0, 0); // valid index
	}
	catch (int err) {
		if (err == -1) cout << "index is out of bound. " << endl;
	}

	try {
		arr[-1] = Point(0, 0); //invalid index
	}
	catch (int err) {
		if (err == -1) cout << "index is out of bound. " << endl;
	}
	try {
		arr.SetElement(-1, Point(0, 0)); //invalid index
	}
	catch (int err) {
		if (err == -1) cout << "index is out of bound. " << endl;
	}
	try {
		arr.GetElement(-1) = Point(0, 0); //invalid index
	}
	catch (int err) {
		if (err == -1) cout << "index is out of bound. " << endl;
	}

	return 0;
}