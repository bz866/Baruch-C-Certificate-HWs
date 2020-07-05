#include <stdio.h>

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

		//get increment given the char
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
				++cnt_others;
				break;
		}
	}

	printf("Number of Zeros is %d. \n", cnt_zero);
	printf("Number of Ones is %d. \n", cnt_one);
	printf("Number of Twos is %d. \n", cnt_two);
	printf("Number of Threes is %d. \n", cnt_three);
	printf("Number of Fours is %d. \n", cnt_four);
	printf("Number of Others numbers is %d. \n", cnt_others);
	
	return 0;
}







