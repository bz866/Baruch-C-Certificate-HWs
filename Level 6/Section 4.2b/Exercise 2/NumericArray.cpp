#ifndef NumericArray_CPP
#define NumericArray_CPP

#include "NumericArray.hpp"

using namespace std;

template <typename T>
NumericArray<T>::NumericArray() : Array<T>() {}

template <typename T>
NumericArray<T>::NumericArray(int theSize) : Array<T>(theSize) {}

template <typename T>
NumericArray<T>::NumericArray(const NumericArray<T>& source) : Array<T>(source) {}

template <typename T>
NumericArray<T>::~NumericArray(){}

template <typename T>
NumericArray<T> NumericArray<T>::operator + (const NumericArray<T>& nuArr) const {
	if (nuArr.Size() != Array<T>::Size()) {
		throw IncompatibleSizeException();
	} // size not match

	NumericArray<T> res(*this);
	for (int i = 0; i < Array<T>::Size(); ++i) {
		res[i] = Array<T>::operator[](i) + nuArr[i];
	}
	return res;
}

template <typename T>
NumericArray<T> NumericArray<T>::operator * (const double factor) const {
	NumericArray<T> res(*this);
	for (int i = 0; i < Array<T>::Size(); ++i) {
		res[i] = Array<T>::operator[](i) * factor;
	}
	return res;
}

template <typename T>
NumericArray<T>& NumericArray<T>::operator = (const NumericArray<T>& source) {
	if (this != &source) {
		Array<T>::operator = (source);
	}
	return *this;
}

template <typename T>
T NumericArray<T>::DotProduct(const NumericArray<T>& nuArr) const {
	if (nuArr.Size() != Array<T>::Size()) {
		throw IncompatibleSizeException();
	}

	T res(0);
	for (int i = 0; i < Array<T>::Size(); ++i) {
		res += (Array<T>::operator[](i) * nuArr[i]);
	}
	return res;
}

#endif

