#include "Point.hpp"
#include <sstream>
using namespace std;

// Getters 
double Point::GetX(){
	return x;
}

double Point::GetY(){
	return y;
}

// Setters
void Point::SetX(double newxval){
	x = newxval;
}

void Point::SetY(double newyval){
	y = newyval;
}

// print out string informations
string Point::ToString(){
	stringstream ss;
	ss << "(stringstream) Point(" << x << ", " << y << ")";
	return ss.str();
}
