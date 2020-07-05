
#include <stdio.h>


int main(int argc, char const *argv[])
{
	/*
	Show that 
	a) 1 shift to the left is the same as multiplying by 2.
	b) 2 shifts to the left are the same as multiplying by 4.
	c) 3 shifts to the left are the same as multiplying by 8.
	*/
	int target;
	int num_power;

	printf("Enter an integer: \n");
	scanf("%d", &target);

	printf("Enter an integer as the digit of left shifting: \n");

	scanf("%d", &num_power);

	printf("After %d shifting to the left, we have: %d \n", num_power, target << num_power);
	printf("Same as multiplying %d by 2 to the power of %d \n", target, num_power);

	return 0;
}