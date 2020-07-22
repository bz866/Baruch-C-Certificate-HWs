#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	
	list<double> ls;
	for (int i = 0; i < 5; ++i) {
		ls.push_back(i * 2.0);
	}
	cout << "List first element: " << ls.front() << endl;
	cout << "List last element: " <<ls.back() << endl;

	// vector<double> v {1,2,3,4}; // only compile in c++17
	vector<double> v;
	for (int i = 0; i < 5; ++i) {
		v.push_back(i * 5.0);
		cout << v[i] << endl; // random access 
	}
	// grow the vector
	v.push_back(1.0);
	v.push_back(2.0);

	map<string, double> m; 
	string keys[] = {"1st", "2nd", "3rd", "4th"};
	for (int i = 0; i < 4; ++i) {
		m[keys[i]] = i + 1.0;
	}

	cout << m["1st"] << endl;
	cout << m["2nd"] << endl;
	cout << m["3rd"] << endl;
	cout << m["4th"] << endl;

	return 0;
}