#include <stdio.h>

void printNumber(int num){	
	/*
	Recursively print the numbers
	*/
	if (num < 0){
		putchar('-');
		num *= -1;
	}

	if (num / 10 > 0){
		printNumber(num / 10); //recursion
	}

	putchar(num % 10 + '0'); // convert the number to character to print out
}

int main(int argc, char const *argv[]){
	int num;

	// Get the input
	printf("Enter the integer to print: \n");
	scanf("%d", &num);

	printNumber(num);

	printf("\n");
	
	return 0;
}