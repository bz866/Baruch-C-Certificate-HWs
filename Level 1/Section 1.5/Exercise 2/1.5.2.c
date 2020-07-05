#include <stdio.h>

void factorials_cal(int num){ 	
	/*
	Get the factorial by recursion 
	*/
	if (num == 0) {
		printf("1 \n"); // 0! = 1
		return;
	}

	if (num > 1){
		printf("%d * ", num);
		factorials_cal (num - 1);  //recursive
	}
	else if (num == 1){
		printf("%d \n", num);
	}
	else{
		printf("Invalid Input Number.\n");
	}
}

int main(int argc, char const *argv[]){
	int num;

	printf("Enter the number to get the factorial: ");
	scanf("%d", &num); //Get the input
	printf("\n");

	factorials_cal(num);

	return 0;
}