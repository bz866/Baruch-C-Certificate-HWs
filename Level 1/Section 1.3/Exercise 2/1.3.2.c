#include <stdio.h>

int main() {
	/*
	Calculates the surface of a triangle with one 90 degree,
	the height and the base are from the user Input
	*/

	float height, base, surface;
	// get height and base
	printf("Enter the height and the base as float with space:\n");
	scanf("%f %f", &height, &base);

	// calculate the surface as float
	surface = height * base / 2;

	printf("Height %4f, Base %4f -> Surface: %4f (Floats are rounded to 4 digits.)\n", height, base, surface);

	return 0;
}

