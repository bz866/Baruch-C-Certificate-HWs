
#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[]){
	/*
	Counts the number of characters, words, lines given text input from keyboard
	*/
	int c; // current character
	bool last_char = false, last_linebreak = false; //last input status indicator
	int num_chars = 0, num_words = 0, num_lines = 0;

	printf("Enter text: \n \
		    (Consecutive space and tabs will be counted as one; Ctrl-D to get the count;)\n");

	// traverse the input
	while((c = getchar()) && c!= EOF && c != 4){
		switch (c) {
			case 32: // space 
				switch (last_char) {
					case 1: 
						++num_words;
						break;
					default:
						break;
	 			}
				last_char = false;
				last_linebreak = false;
				break;

			case 11: //tab
				switch (last_char){ 
					case 1: 
						++num_words; 
						break;
					default:
						break;
	 			}

				last_char = false;
				last_linebreak = false;
				break;

			case 10:  // line break
				switch (last_char){
					case 1:
						++num_words;
						break;
					default:
						break;
				}

				last_linebreak = true;
				last_char = false;
				break;

			default: //character
				switch (last_linebreak){
					case 1:
						++num_lines;
						break;
					default:
						break;
				}
				++num_chars;

				last_linebreak = false;
				last_char = true;
		}
	}

	//Handle diffenent situation in the last input
	if (last_char){
		++num_words;
	}

	if (num_words > 0){
		++num_lines;
	}



	printf("Number of character %d\n; ", num_chars);
	printf("Number of words %d\n; ", num_words);
	printf("Number of lines %d\n; ", num_lines);

	return 0;
}

