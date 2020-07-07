#include <stdio.h>

void swap(int* a, int* b) {
	// swap two values by points
	int tmp = *a;
	*a = *b;
	*b = tmp;
	return;
}

int main(){
	/*
	Swap two numbers by points
	*/
	
	int a, b;
	// Get two numbers 
	printf("Enter two numbers: (Read as integers, seperate by space)\n");
	scanf("%d %d", &a, &b);
	printf("\n Original inputs: a = %d; b = %d \n", a, b);

	swap(&a, &b); // swap two integers by points 
	printf("After swapping, a = %d; b = %d \n", a, b);

	return 0;
}