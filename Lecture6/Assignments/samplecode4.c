#include <stdio.h>

int main(void)
{
	int N, i;

	printf("Enter N: ");
	scanf("%d", &N);

	int a[N];


	printf("Enter %d numbers: ", N);
	for(i=0; i<N; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}

	printf("Negative numbers: \n");

	for(i=N0; i<N; i++){
		if(a[i]<0){
			printf("a[%d] = %d is a negative number. \n", i, a[i]);
		}
	}

	return 0;
}