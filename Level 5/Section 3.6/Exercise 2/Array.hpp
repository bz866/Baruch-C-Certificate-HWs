#ifndef Array_HPP
#define Array_HPP

#include "Point.hpp"
#include "OutOfBoundsException.hpp"

using namespace std;

class Array{
private:
	int size;
	Point* m_data;

public:
	Array();
	Array(const int theSize);
	Array(const Array& arrobj);
	~Array();

	Array& operator = (const Array& arr);
	Point& operator [](int idx); // index setter
	const Point& operator [](int idx) const; // index getter

	// Getters
	int Size() const;
	Point& GetElement(int idx) const;
	// Setters
	void SetElement(int idx, const Point& p); 

};


#endif 