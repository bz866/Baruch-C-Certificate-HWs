#include <stdio.h>

float Celius_2_Fahreheit(float C_degree){
	//convert the Fahreheit degree to the Celius degree
	float F_degree;
	F_degree = 9.0/5.0 * C_degree + 32.0;
	return F_degree;
}

int main(int argc, char const *argv[]){	
	float C_degree = 0;
	float F_degree = Celius_2_Fahreheit(C_degree);
	float step_size = 1.0;

	printf("\n");
	printf("Degrees:\n");
	printf("Celius, Fahreheit\n");

	do{

		printf("%10.1f, %10.1f\n", C_degree, F_degree);

		C_degree += step_size;
		F_degree = Celius_2_Fahreheit(C_degree);
	}while (C_degree <= 19);


	return 0;
}
