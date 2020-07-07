//define the max length of file name
#ifndef MAX_filename_len
#define MAX_filename_len 255
#endif

#include <stdio.h>
#include<string.h>


int main(int argc, char const *argv[])
{
	int c;
	FILE* fp; 
	char filename[MAX_filename_len]; // buffer string

	printf("Enter the file Name(e.g. File.txt): \n");
	gets(filename); //gets_s can be used to avoid warning if using Visual Studio
	fp = fopen(filename, "a+"); // Open/Create the specified file

	printf("Enter characters to save into the sample file(end with ctrl-a): \n");

	// get content from the keyboard
	while((c = getchar()) != 1){
		fputc(c, fp); // write to the file
	}

	printf("CTRL + A is correct ending. \n"); // End the program by ctrl-a and print out message
	fclose(fp); //close the file

	return 0;
}