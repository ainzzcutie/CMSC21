#include <stdio.h>

int main(void){
	//Declares the variables i and j as integers
	int i, j;
	//Declares the variables x and y as floats
	float x, y;

	//Gives the variables their values
	i = 10;
	j = 20;
	x = 43.2892f;
	y = 5527.0f;

	/*%d in the line indicates an integer is to be printed while
	%f indicates a float number is to be printed.*/
	printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y); //variables are written in the order of printing
	
	return 0;
}