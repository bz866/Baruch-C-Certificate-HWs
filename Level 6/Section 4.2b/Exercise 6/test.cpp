#include "Stack.cpp" // for template, include the source file but the header file
#include "Point.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){

	Stack<Point, 5> stkPoint; //test the size constructor

	Stack<Point, 12> stkPoint1;
	for (int i = 0; i < 12; ++i) {
		stkPoint1.Push(Point(i, i)); // test Push()
	}

	try {
		stkPoint1.Push(Point(100, 100)); 
	}
	catch (StackException& stkExp) {
		cout << stkExp.GetMessage() << endl;
	}

	Stack<Point, 12> stkPoint2 = stkPoint1; // test assignment operator

	for (int i = 0; i < 12; ++i) {
		cout << stkPoint2.Pop() << endl; // test Pop()
	}

	try {
		cout << stkPoint2.Pop() << endl; 
	}
	catch (StackException& stkExp) {
		cout << stkExp.GetMessage() << endl;
	}
}





