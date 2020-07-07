#ifndef Point_HPP
#define Point_HPP

#include <iostream>
using namespace std;

class Point{
private:
	// coordinates 
	double x; 
	double y; 

public:
	Point(){}; 
	~Point(){};

	// Getters
	double GetX(); 
	double GetY(); 

	// Setters
	void SetX(double newxval); 
	void SetY(double newyval);

	// For print out the Point information
	string ToString();	
};

#endif 