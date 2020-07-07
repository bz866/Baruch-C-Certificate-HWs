#include <stdio.h>
#include "Defs.hpp"

int main(int argc, char const *argv[]){
	/*
	Get the maximum among numbers using Macros
	*/
	double x, y, z;

	// Get numbers from keyboard
	printf("Enter three values seperated by space(read as Doubles):\n");
	scanf("%lf %lf %lf", &x, &y, &z);

	// call macro MAX3 to return the largest value among three arguments
	printf("The largest the value is: %lf \n", MAX3(x, y, z)); 

	return 0;
}