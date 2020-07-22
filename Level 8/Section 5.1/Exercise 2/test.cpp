#include <iostream>
#include <boost/tuple/tuple.hpp>

using namespace std;
typedef boost::tuple<string, int, double> Person;

void PrintTuple(const Person& tp) {
	cout << "Name: " << tp.get<0>() << " Age: " << tp.get<1>() << " Length: " << tp.get<2>() << endl;
}

int main(int argc, char const *argv[])
{

	Person p1(string("John"), 18, 6.8);
	Person p2(string("Shawn"), 19, 6.9);
	Person p3(string("Joe"), 20, 7.0);
	Person p4(string("Paul"), 21, 7.1);

	PrintTuple(p1);
	PrintTuple(p2);
	PrintTuple(p3);
	PrintTuple(p4);

	cout << "Joe gets +3 on age." << endl;
	p3.get<1>() += 3;

	PrintTuple(p1);
	PrintTuple(p2);
	PrintTuple(p3);
	PrintTuple(p4);

	return 0;
}