#include <stdio.h>

char* convert_number_2_words(int cnt_num){	
	/*
	Convert integer to String
	*/
	char* cnt_word;
	
	if (cnt_num < 3){
		switch(cnt_num){
			case 0:
				cnt_word = "Zero";
				break;

			case 1:
				cnt_word = "One";
				break;

			case 2:
				cnt_word = "Two";
				break;
		}
	}
	return cnt_word;
}

int main(){	
	int c;
	int cnt_zero = 0;
	int cnt_one = 0;
	int cnt_two = 0;
	int cnt_three = 0;
	int cnt_four = 0;
	int cnt_others = 0;

	printf("Enter characters; use ^Z to halt the Input. \n");

	while((c = getchar()) && c != EOF){

		//Get the count given the char
		switch(c){ 
			case '0':
				++cnt_zero;
				break;

			case '1':
				++cnt_one;
				break;

			case '2':
				++cnt_two;
				break;

			case '3':
				++cnt_three;
				break;

			case '4':
				++cnt_four;
				break;

			default:
				if (isdigit(c)) {
					++cnt_others;
				}
				break;
		}
	}

	if (cnt_three < 3){
		char* cnt_three_word;
		cnt_three_word = convert_number_2_words(cnt_three);

		printf("Number of Zeros is %d. \n", cnt_zero);
		printf("Number of Ones is %d. \n", cnt_one);
		printf("Number of Twos is %d. \n", cnt_two);
		printf("Number Three appears %s times. \n", cnt_three_word);
		printf("Number of Fours is %d. \n", cnt_four);
		printf("Number of Others numbers is %d. \n", cnt_others);
		
		return 0;
	}
	else {
		printf("The number three appears more than two times.\n");
		return 1;
	}
}

