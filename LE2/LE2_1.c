#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

//Functions cannot return an array so I used a pointer here
int *scan_word(int occurences[26]){
	char c;
	//Gets an input from the user until a space is detected
	while((c = getchar()) != '\n'){
		//checks if the input are letters
		if(isalpha(c)){
			//Increments the value of the index located by subtracting the position of the letter minus the position of 'A'
			occurences[toupper(c) - 'A']++;
		}
	}
	//returns the address of the array occurences
	return occurences;
}

//Function for checking if anagram
bool isAnagram(int occurences1[26],int occurences2[26]){
	//same variable is used as an indicator
	int same = 1;
	//goes through every element of occurences1 array and compares it with every element of occureces2 array
	for (int i = 0; i < 26; i++){
		//if an element is not the same, the value of same is changed to 0
		if (occurences1[i] != occurences2[i]){
			same = 0;
			break;
		}
	}
	//returns a bool type value (0 or 1)
	return same;
}

int main(void){
	//declaration of variables and arrays
	int *fWord, *sWord, letters[26] = {0};
	int occurences1[26], occurences2[26];

	//Asks the user the first word but the process of storing input is presented in the function scan_word
	printf("Enter the first word: ");
	//calls the function scan_word while passing the letters array as the argument and stores the returned value onto fWord
	fWord = scan_word(letters);
	printf("\n");
	//every element of occurences1 array is changed accordingly to the elements of the fWord array which was returned from the function
	for (int i = 0; i < 26; i++){
		occurences1[i] = fWord[i];
	}

	//resets the values of the elements inside the letters array
	for (int i = 0; i < 26; i++){
		letters[i] = 0;
	}

	//Asks the user the second word but the process of storing input is presented in the function scan_word
	printf("Enter the second word: ");
	//calls the function scan_word while passing the letters array as the argument and stores the returned value onto sWord
	sWord = scan_word(letters);
	printf("\n");
	//every element of occurences2 array is changed accordingly to the elements of the fWord array which was returned from the function
	for (int i = 0; i < 26; i++){
		occurences2[i] = sWord[i];
	}

	//calls the function isAnagram
	if(isAnagram(occurences1, occurences2)){		//if returned value is 1, which is true, it is an anagram
		printf("The words are anagrams\n");
		return 0;
	}
	printf("The words are not anagrams\n");			//else, returned value is 0, which is false
	return 0;
}
