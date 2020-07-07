#include <stdio.h>
#define MAXLINE 30

/* Implement the Length() function here */
// String length declaration
int Length(char *str){
	/*
	Count the length of a string
	*/
	unsigned int cnt = 0;
	while (str[cnt++] != '\0'); // traverse the string till the end
	return cnt - 1;
}

int main(){
	char string[MAXLINE+1];  // Line of maxium 30 chars + \0
	int c;                   // The input character
	int i=0;                 // The counter
	// Print intro text
	printf("Type up to %d chars. Exit with ^Z\n", MAXLINE);
	// Get the characters
	while ((c=getchar())!=EOF && i<MAXLINE){
		string[i++]=(char)c;
	}
	string[i]='\0';          // String must be closed with \0
	printf("String length is %d\n", Length(string));
	return 0;
}
