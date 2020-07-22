#include "Sum.cpp"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	

	vector<double> v;
	list<double> ls;
	map<string, double> m;
	for (int i = 0; i < 10; ++i) {
		v.push_back(i);
		ls.push_back(i);
		m[to_string(i)] = i;
	}

	cout << "Sum of the vector: " << Sum(v) << endl;
	cout << "Sum of the list: " << Sum(ls) << endl;
	cout << "Sum of the map: " << Sum(m) << endl;

	cout << "Sum of the vector from 1 to 5: " << Sum<vector<double> >(v.begin() + 1, v.begin() + 6) << endl;
	cout << "Sum of the list from 2 to 5: " << Sum<list<double> >(next(ls.begin(), 2), next(ls.begin(), 6)) << endl;
	cout << "Sum of the map from 6 to 8: " << Sum<string, double>(next(m.begin(), 6), prev(m.end(), 1)) << endl;

	return 0;
}