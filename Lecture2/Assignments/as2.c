#include<stdio.h>
		
//PROGRAM OF REVERS THREE DIGIT NUMBER WITHOUT LOOP
void main(){
	//Declaring the variables
	int num, placeholder;
	//Asking the user for an input	
	printf("ENTER A THREE DIGIT NUMBER: ");
	scanf("%d",&num);
		
	printf("REVERSE: ");
	//By using the modulo operator, we get the rightmost digit of the number
	placeholder = num%10;
	//we then print that rightmost digit as the first digit in our new number
	printf("%d",placeholder);
	//Then we declare the new value of the 'placeholder variable' with the quotient of the original number and 10
	//By doing so, we get the two leftmost digit and the middle digit in the original number
	placeholder = num/10;
	//The new value will then be modulo with 10 to get the middle digit of the original number
	placeholder = placeholder%10;
	//we then print that middle digit as the middle digit in our new number
	printf("%d",placeholder);
	//Again, we divide the temporary number with 10 to get the remaining digits of the original number
	placeholder = num/10;
	//Then we declare the new value of the 'placeholder variable' with the quotient of the temporary number and 10
	//By doing so, we get the two leftmost digit of the original number
	placeholder = placeholder/10;
	//we then print that leftmost digit as the rightmost digit in our new number
	printf("%d",placeholder);
}