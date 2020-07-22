#include "FuncObj.cpp"
#include <iostream>
#include <list>
#include <map>
#include <vector>

using namespace std;

int lessThan6(double target) {
	const double limit = 6;
	return (target < limit);
} // check if the given is small than 6.00

int main(int argc, char const *argv[])
{
	
	vector<double> v;
	list<double> ls;
	for (int i = 0; i < 10; ++i) {
		v.push_back(i);
		ls.push_back(i);
		cout << i << endl;
	}

	cout << "Global Function: numerber of elements less than 6: " << count_if(v.begin(), v.end(), lessThan6) << endl;

	double limit = 7;
	cout << "Function Object: number of elements less than " << limit << " is: "
		<< count_if(ls.begin(), ls.end(), FuncObj<double>(limit)) << endl; 

	return 0;
}