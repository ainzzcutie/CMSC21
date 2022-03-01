//Prints int and float values in various formats
#include <stdio.h>

int main(void){
	//Declaration of variables
	int i;
	float x;
	//Initializing values for the variables
	i = 40;
	x = 839.21f;

	/*In the first printf statement, the number after the percent sign
	indicates how many spaces the display gets, and the number after the"."
	indicates the number of digits the display gets. This is for integer type values*/
	printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
	/*In the second printf statement, the number after the percent sign
	indicates how many spaces the display gets, and the number after the"."
	indicates the number of decimal places to be displayed. This is for 
	the e and f type values. For the g type values, the number after the"."
	signifies how many significant figures is to be displayed*/
	printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);
	return 0;
}