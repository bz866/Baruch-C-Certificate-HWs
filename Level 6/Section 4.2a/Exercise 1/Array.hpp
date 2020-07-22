#ifndef Array_HPP
#define Array_HPP

#include "Point.hpp"
#include "OutOfBoundsException.hpp"

using namespace std;

template <typename T>
class Array{
private:
	int size;
	T* m_data;

public:
	Array();
	Array(const int theSize);
	Array(const Array<T>& arrobj);
	~Array();

	Array<T>& operator = (const Array<T>& arr);
	T& operator [](int idx); // index setter
	const T& operator [](int idx) const; // index getter

	// Getters
	int Size() const;
	T& GetElement(int idx) const;
	// Setters
	void SetElement(int idx, const T& p); 

};

// #ifndef Array_CPP // Must be the same name as in source file #define 
// #include "Array.cpp"
// #endif
// Can be Replaced by ifndef Array_CPP in source file
// Check if source file exists and include it with the header file

#endif 