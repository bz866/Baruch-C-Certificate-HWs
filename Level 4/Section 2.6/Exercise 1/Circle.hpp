#ifndef Circle_HPP
#define Circle_HPP

#ifndef _USE_MATH_DEFINES
#define _USE_MATH_DEFINES
#endif

#include "Point.hpp"
#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

namespace BINQIANZENG {
	namespace CAD {
		class Circle{
		private:
			Point centerpt;
			double radius;

		public:
			Circle(); //Defalut Constructor 
			Circle(const Circle& circle);//Copy constructor
			Circle(const Point& centerpt, const double& radius); // The constructor that accepts center point and the radius 

			~Circle(); //Destructor 
			
			// Getters
			Point C() const; //overloaded getter for the center point
			double r() const; //overloaded getter for the radius

			// Setters
			void C(const Point& new_centerpt); //overloaded setter for the center point
			void r(const double& new_radius); //overloaded setter for the radius

			double Diameter() const; // Calculate the diameter for the circle
			double Area() const; //Calculate the area for the circle
			double Circumference() const; //Calculate the circumstance of the circle
			string ToString() const; //Return the description of the circle in string 

			// overloaded operators
			Circle operator * (double factor) const; // Scale the radius
			bool operator == (const Circle& c) const; // Equally compare operator
			Circle& operator = (const Circle& source); // Assign
			Circle& operator *= (double factor); // Scale the radius & assign 
			friend ostream& operator << (ostream& os, const Circle& c);
		};
	}
}

#endif