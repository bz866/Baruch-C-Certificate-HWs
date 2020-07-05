#include <stdio.h>

int main() {
	/*
	Take a int as input
	if input == 0, print married
	else print not married
	*/
	int marriageStatus;

	// Get marriage status from keyboard
	printf("Enter an integer:\n");
	scanf("%d", &marriageStatus);

	// use operator to indicate the marriage status
	printf("Married Status: %s \n", (marriageStatus == 0 ? "NOT Married" : "Married")); 

	return 0;
}