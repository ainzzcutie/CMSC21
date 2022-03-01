#include <stdio.h>

int main(void){
	//Declaring the variables
	int num1, num2, result;
	//Initializing value of num1 to 15 and num2 to 87
	num1 = 15;
	num2 = 87;
	//Operation required from the program
	result = num2-num1;

	/*Prints the string text and the appropriate values replacing the placeholders
	according to the order in the statement*/
	printf("The answer to the question %d - %d is equal to %d\n", num2, num1, result);
	return 0;
}