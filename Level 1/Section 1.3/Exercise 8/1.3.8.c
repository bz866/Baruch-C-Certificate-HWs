/* Assignment operators */
#include <stdio.h>
int main(){
	/*
	Guess the output of all calculations
	*/
	int x=2;
	int y; int z;
	
	x*=3+2;
	printf("x=%d\n", x);
	printf("Guess 10\n");
	
	x*=y=z=4;
	printf("x=%d\n", x);
	printf("Guess 40\n");
	
	x=y==z;
	printf("x=%d\n", x);
	printf("Guess 1\n");

	return 0; 
}