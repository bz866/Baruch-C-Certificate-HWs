/* Operators */
#include <stdio.h>
int main(){
	/*
	Predict the output of each calculations 
	*/
	int x;
	
	x=-3+4*5-6;
	printf("x=%d\n", x);
	printf("Guess 11\n");
	
	x=3+4%5-6;
	printf("x=%d\n", x);
	printf("Guess 1\n");

	x=-3*4%-6/5;
	printf("x=%d\n", x);
	printf("Guess 0\n");
	
	x=(7+6)%5/2;
	printf("x=%d\n", x);
	printf("Guess 1\n");
	
	return 0; 
}