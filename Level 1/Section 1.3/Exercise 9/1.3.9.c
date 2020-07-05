/* Conditional expressions */
#include <stdio.h>
int main(){
	/*
	Guess the output of all calculations 
	*/
	int x=1;
	int y=1;
	int z=1;

	x+=y+=x;// x = 3, y = 2, z = 1
	printf("%d\n", (x<y)?y:x);
	printf("Guess 3\n");

	printf("%d\n", (x<y)?x++:y++); // x = 3, y =3, z = 1
	printf("Guess 2\n");

	printf("%d\n", x);
	printf("Guess 3\n");

	printf("%d\n", y);
	printf("Guess 3\n");

	return 0; 
}