#include <stdio.h>
#include "Defs.hpp" //the header file includes macros of two prints

int main(int argc, char const *argv[]){
	/*
	print number using MACROs
	*/

	double a, b;

	// Take two numbers from keyboard
	printf("Enter two numbers seperated by space(Read as Double):\n");
	scanf("%lf %lf", &a, &b); 

	// print using Macros
	PRINT1(a); 
	PRINT2(a, b); 

	return 0;
}
