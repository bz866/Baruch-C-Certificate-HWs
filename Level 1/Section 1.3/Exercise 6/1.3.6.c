#include <stdio.h>

int main(void){
	/*
	a C-program that shifts any number two places to the right. Input should be an
	integer. Output should be the shifted result, as well as output an indication of
	whether a logical or arithmetic shift is performed
	*/
	int target;

	printf("Enter an integer for right shift: \n");

	scanf("%d", &target);

	if (target < 0){
		printf("Arithmetic shift applied for given number < 0. \n");
		printf("After shifting two digits to the right, we have %d.\n", target >>= 2);

	} 
	else {
		printf("Logical shift applied for given number >= 0. \n");
		printf("After shifting two digits to the right, we have %d.\n", target >>= 2);
	}

	return 0;
}