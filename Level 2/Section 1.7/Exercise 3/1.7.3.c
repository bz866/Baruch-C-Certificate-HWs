#include <stdio.h>
#define PRD(a) printf("%d", (a) ) // Print decimal
#define NL printf("\n"); // Print new line

// Create and initialize array
int a[]={0, 1, 2, 3, 4};

int main(){
	//Guess the outputs
	int i;
	int* p;

	for (i=0; i<=4; i++) PRD(a[i]); // 1
		NL;

	for (p=&a[0]; p<=&a[4]; p++) PRD(*p); // 2
		NL;
		NL;

	for (p=&a[0], i=0; i<=4; i++) PRD(p[i]); // 3
		NL;
		

	for (p=a, i=0; p+i<=a+4; p++, i++) PRD(*(p+i)); // 4
		NL;
		NL;

	for (p=a+4; p>=a; p--) PRD(*p); // 5
		NL;

	for (p=a+4, i=0; i<=4; i++) PRD(p[-i]); // 6
		NL;

	for (p=a+4; p>=a; p--) PRD(a[p-a]); // 7
		NL;

	//Print out predictions
	printf("Guess 1 : 0 1 2 3 4.\n");
	printf("Guess 2 : 0 1 2 3 4.\n");
	printf("Guess 3 : 0 1 2 3 4.\n");
	printf("Guess 4 : 0 2 4.\n");
	printf("Guess 5 : 4 3 2 1 0.\n");
	printf("Guess 6 : 4 3 2 1 0.\n");
	printf("Guess 7 : 4 3 2 1 0.\n");

	return 0;
}