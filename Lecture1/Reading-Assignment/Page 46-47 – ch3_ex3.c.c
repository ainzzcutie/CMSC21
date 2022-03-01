/* Adds two fractions */
#include <stdio.h>

int main(void){
	/*Declaration of variables. "num"variables are numerators while "denom"
	variables are for denominators*/
	int num1, denom1, num2, denom2, result_num, result_denom;
	//prompts the user to enter a fraction
	printf ("Enter first fraction: ");
	//The first input goes into the num1 variable while the second input goes into the denom1 variable
	scanf ("%d/%d", &num1, &denom1) ;
	//prompts the user to enter a secondfraction
	printf ( "Enter second fraction: ");
	//The first input goes into the num2 variable while the second input goes into the denom2 variable
	scanf ("%d/ %d", &num2, &denom2);
	//Calculates the resuting numerator using the formula below
	result_num = num1 * denom2 + num2 * denom1;
	//Calculates the resulting denominator using the formula below
	result_denom = denom1 * denom2;
	/*Prints the resulting numerator into the first placeholder
	Prints the resulting denominator into the second placeholder*/
	printf ( "The sum is %d/%d\n", result_num, result_denom);
	return 0;
} 