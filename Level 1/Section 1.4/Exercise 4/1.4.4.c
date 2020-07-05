#include <stdio.h>


float Fahreheit_2_Celsius(float F_degree){
	//Function to convert Fahreheit degree into Celsius degree
	float C_degree;
	C_degree = (5.0 / 9.0) * (F_degree - 32.0);
	return C_degree;
}


int main(int argc, char const *argv[]){
	//Initialization
	float F_degree = 0;
	float C_degree = Fahreheit_2_Celsius(F_degree);
	float step_size = 20;

	printf("Degrees:\n");
	printf("Fahrenheit, Celsius \n"); //Format title

	do{
		printf("%10.1f, %10.1f \n", F_degree, C_degree);

		F_degree += step_size;
		C_degree = Fahreheit_2_Celsius(F_degree);
	}while (F_degree <= 300);

	return 0;
}