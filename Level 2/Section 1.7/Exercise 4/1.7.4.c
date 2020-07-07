#include <stdio.h>

void DayName(num){
	// days string
	const char* DayNames_arr[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "\0"};

	if (1 <= num && 7>= num){
		printf("Day %d is a %s.\n\n", num, DayNames_arr[num-1]); //access the corresponding string and print
	}
	else {
		printf("Invalid Input.\n\n"); //error handling
	}

}

int main(int argc, char const *argv[]){
	int num; //day-number taker

	// get input from the keyboard
	printf("Enter an integer:\n\n");
	scanf("%d", &num);
	DayName(num); //convert day-number as day-name and print

	return 0;
}