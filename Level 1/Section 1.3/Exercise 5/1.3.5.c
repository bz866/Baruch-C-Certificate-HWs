#include <stdio.h>

int main(int argc, char const *argv[]){
	/*
	Show the difference between --i and i--
	*/
	int i = 3;
	printf("The initial value of i is %d.\n", i);
	
	int j = --i;
	printf("Denote j = --i\n");
	printf("We have j= %d, and i = %d. \n", j, i);
	
	i = 3;
	printf("Re-initialize i as %d.\n", i);
	int k = i--;
	printf("Denote k = i--\n");
	printf("We have k = %d, and i = %d. \n", k, i);

	return 0;
}