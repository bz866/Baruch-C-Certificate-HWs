#include <stdio.h>

int main(int argc, char const *argv[]){
	int c;
	printf("Enter characters. Exit by 'ctrl-a'.\n");

	//get input from keyboard until the program is ended by ctrl-a
	while ((c = getchar()) && c != 1) {
		putchar(c); //display characters in buffer on the screen
	}

	printf("ctrl + a is a correct ending.");
	return 0;
}