#ifndef Sum_CPP
#define Sum_CPP

#include <vector>
#include <list>
#include <map>

using namespace std;

template <typename T>
double Sum(const T& t) {
	double res = 0;
	typename T::const_iterator it;
	for (it = t.begin(); it != t.end(); ++it) {
		res += *(it);
	}
	return res;
} // Sum all elements in a linear container, e.g. vector/list

template <typename T1, typename T2>
double Sum(const map<T1, T2>& t) {
	double res = 0;
	typename map<T1, T2>::const_iterator it;
	for (it = t.begin(); it != t.end(); ++it) {
		res += (it->second);
	}
	return res;
} // Sum all elements in a map

template <typename T>
double Sum(const typename T::const_iterator& itBegin, const typename T::const_iterator& itEnd) {
	double res = 0;
	typename T::const_iterator it;
	for (it = itBegin; it != itEnd; ++it) {
		res += *(it);
	}
	return res;
} // Sum all elements between two iterators of a linear container, e.g. vector/list

template <typename T1, typename T2>
double Sum(const typename map<T1, T2>::const_iterator& itBegin, const typename map<T1, T2>::const_iterator& itEnd) {
	double res= 0;
	typename map<T1, T2>::const_iterator it;
	for (it = itBegin; it != itEnd; ++it) {
		res += (it->second);
	}
	return res;
} // Sum all elements between two iterators of a map


#endif






