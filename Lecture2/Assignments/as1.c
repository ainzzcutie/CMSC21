#include<stdio.h>
		
//PROGRAM OF REVERS TWO DIGIT NUMBER WITHOUT LOOP
void main(){
	//Declaring the variables
	int num, placeholder;
	//Asking the user for an input
	printf("ENTER A TWO DIGIT NUMBER: ");
	scanf("%d",&num);
		
	printf("REVERSE: ");
	//By using the modulo operator, we get the rightmost digit of the number
	placeholder = num%10;
	//we then print that rightmost digit as the first digit in our new number
	printf("%d",placeholder);
	//Then we declare the new value of the 'placeholder variable' with the quotient of the original number and 10
	placeholder = num/10;
	//The new value will then be modulo with 10 to get the leftmost digit of the original number
	placeholder = placeholder%10;
	//We print the leftmost digit as the rightmost digit in our new number
	printf("%d",placeholder);
}