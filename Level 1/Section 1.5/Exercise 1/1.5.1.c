#include <stdio.h>

double minus(double num_One, double num_Two){
	/*
	Get the difference between two numbers
	*/
	return num_One - num_Two;
}

int main(int argc, char const *argv[]){
	float num_One, num_Two, diff;

	printf("Enter the first number and the second number:\n");
	scanf("%f %f", &num_One, &num_Two); // Get input

	diff = minus(num_One, num_Two);  // Calculate the difference

	printf("The difference of the first number and the second number is: %2f \n", diff);

	return 0;
}