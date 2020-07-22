#include "Array.cpp"
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include <boost/shared_ptr.hpp>
#include <iostream>

using namespace std;

typedef boost::shared_ptr<Shape> ShapePtr;
typedef Array<ShapePtr> ShapeArray;

int main(int argc, char const *argv[])
{
	
	ShapePtr ptr_shape1(new Point(0,0));
	ShapePtr ptr_shape2(new Point(1,1));
	ShapePtr ptr_shape3(new Line(Point(2,2), Point(3,3)));
	ShapePtr ptr_shape4(new Line());
	ShapePtr ptr_shape5(new Circle(Point(5,5), 5));

	// use scope to see how many times a pointer is used
	{
		Array<ShapePtr> arrShapes(5); 
		arrShapes[0] = ptr_shape1;
		arrShapes[1] = ptr_shape2;
		arrShapes[2] = ptr_shape3;
		arrShapes[3] = ptr_shape4;
		arrShapes[4] = ptr_shape5;

		cout << "All shapes in the ShapePtr Array: " << endl;
		for (int i = 0; i < arrShapes.Size(); ++i) {
			cout << arrShapes[i]->ToString() << endl;
			cout << "Use count: " << arrShapes[i].use_count() << endl;
		}
	}

	// out of scope, arrShapes is deleted, all use_count should minus 1
	cout << "Use counts out of the scope: " << endl;
	cout << ptr_shape1.use_count() << endl;
	cout << ptr_shape2.use_count() << endl;
	cout << ptr_shape3.use_count() << endl;
	cout << ptr_shape4.use_count() << endl;
	cout << ptr_shape5.use_count() << endl;


	return 0;
}