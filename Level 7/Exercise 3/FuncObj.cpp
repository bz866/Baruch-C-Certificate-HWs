#ifndef FuncObj_CPP
#define FuncObj_CPP

#include "FuncObj.hpp"

template <typename T>
FuncObj<T>::FuncObj(const T& t) : limit(t) {}

template <typename T>
FuncObj<T>::FuncObj(const FuncObj<T>& source) : limit(source.limit) {}

template <typename T>
FuncObj<T>::~FuncObj() {}

template <typename T>
FuncObj<T>& FuncObj<T>::operator = (const FuncObj& source) {
	if (this != & source) {
		limit = source.limit;
	}
	return *this;
}

template <typename T>
int FuncObj<T>::operator () (const T& target) const{
	return (target < limit);
}

#endif