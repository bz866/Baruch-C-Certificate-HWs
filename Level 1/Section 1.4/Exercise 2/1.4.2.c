
#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
	/*
	Counts the number of characters, words, lines given text input from keyboard
	*/
	int c;
	bool last_char = false, last_linebreak = false; //last input status indicator
	int num_chars = 0, num_words = 0, num_lines = 0;

	printf("Enter text: \n \
		    (Multiple consecutive space/tab will be counted as one; Ctrl-D to get the count;)\n");

	do{
		if (c == 32 || c == 11){ //space and //tab
			if(last_char){
				++num_words;
			}
 
			last_char = false;
			last_linebreak = false;
		}

		else if (c == 10){ //line break
			if (last_char)
			{
				++num_words;
			}

			last_linebreak = true;
			last_char = false;
		}

		else  //character
		{
			if (last_linebreak){
				++num_lines;
			}

			++num_chars;

			last_linebreak = false;
			last_char = true;
		}
	}while((c = getchar()) && c!= EOF);

	--num_chars; // Do while causes one extra count of characters at the head of the document

	//Handle diffenent situation in the last input
	if (last_char)
	{
		++num_words;
	}

	if (num_words > 0)
	{
		++num_lines;
	}

	printf("Number of character %d\n; ", num_chars);
	printf("Number of words %d\n; ", num_words);
	printf("Number of lines %d\n; ", num_lines);

	return 0;
}