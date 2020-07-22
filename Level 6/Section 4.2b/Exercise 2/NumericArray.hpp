#ifndef NumericArray_HPP
#define NumericArray_HPP

#include "Array.cpp"
#include "IncompatibleSizeException.hpp"

using namespace std;

template <typename T>
class NumericArray : public Array<T> {
public:
	NumericArray();
	NumericArray(int theSize);
	NumericArray(const NumericArray<T>& source);
	virtual ~NumericArray();

	NumericArray<T> operator + (const NumericArray<T>& nuArr) const;
	NumericArray<T> operator * (const double factor) const;
	NumericArray<T>& operator = (const NumericArray<T>& nuArr);
	T DotProduct(const NumericArray<T>& nuArr) const;
};

#endif

