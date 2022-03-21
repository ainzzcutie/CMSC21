#include <stdio.h>
#include <stdbool.h>

int main(void){
	int age;
	bool teenager;
	scanf("%d", &age);
	if(age>=13 && age<=19){
		teenager = true;
	}else{
		teenager = false;
	}

	printf("%d\n", teenager);

	return 0;
}