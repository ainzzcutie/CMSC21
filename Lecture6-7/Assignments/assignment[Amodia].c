#include <stdio.h>

#define SIZE 8

int main(void)
{
	int start, counter;
	//initialization of array
	int road_networks[SIZE][SIZE] = {
		//use designated initialization to set specific index values to 1 while else is 0
		{[0]=1, [1]=1, [5]=1},
		{[0]=1, [1]=1, [2]=1},
		{[1]=1, [2]=1, [4]=1, [5]=1},
		{[3]=1, [4]=1},
		{[3]=1, [4]=1},
		{[0]=1, [2]=1, [5]=1},
		{[0]=1, [3]=1, [6]=1},
		{[5]=1, [7]=1}
	};

	//printing of matrix
	printf("\n\t\tRoad Network\n");
	for (int col = 0; col < SIZE; col++) {
        //switch-case for printing the correct letter
    	switch (col)
		{
		case 0:
			printf("      A     ");
			break;
		case 1:
			printf("B     ");
			break;
		case 2:
			printf("[C]   ");
			break;
		case 3:
			printf("[D]   ");
			break;
		case 4:
			printf("E     ");
			break;
		case 5:
			printf("F     ");
			break;
		case 6:
			printf("G     ");
			break;
		case 7:
			printf("H     ");
			break;	
		}
  	}
 	printf("\n");
  	for (int col = 0; col < SIZE; col++) {
    	printf("-------");
  	}
  	printf("\n");
	for (int row = 0; row<SIZE; row++){
        //switch-case for printing the correct letter
		switch (row)
		{
		case 0:
			printf("A     ");
			break;
		case 1:
			printf("B     ");
			break;
		case 2:
			printf("[C]   ");
			break;
		case 3:
			printf("[D]   ");
			break;
		case 4:
			printf("E     ");
			break;
		case 5:
			printf("F     ");
			break;
		case 6:
			printf("G     ");
			break;
		case 7:
			printf("H     ");
			break;	
		}
		
        //printing of the numbers inside the matrix or inside the array
		for (int col = 0; col < SIZE; col++)
		{
			printf("%d     ", road_networks[row][col]);
		}
		printf("\n");
	}	

    //user prompt
	printf("\nWhich point are you located? 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H\n");
	scanf("%d", &start);

    //printing of statements
	printf("\nAt point: ");
	switch (start)
	{
	case 0:
		printf("A");
		break;
	case 1:
		printf("B");
		break;
	case 2:
		printf("C");
		break;
	case 3:
		printf("D");
		break;
	case 4:
		printf("E");
		break;
	case 5:
		printf("F");
		break;
	case 6:
		printf("G");
		break;
	case 7:
		printf("H");
		break;	
	}

    //initialization of necessary parameters to be used in the process
	int i = start;
	int j =0;
    //while the point does not arrive at a charging station, the loop continues
	while (i!=3 && i!=2 && i<SIZE)
	{
        //if the point does have a 1, then that becomes the new starting point
		if (road_networks[i][j] == 1)
		{
			i = j;
			j++;
		}
		else{
			j++;
		}
	}		 
    
    //printing of final output
	if (i == 2)
	{
		printf("\npoint: C arrived to charging station");
	}
	else if (i == 3)
	{
		printf("\npoint: D arrived to charging station");
	}
	else{
		printf("\npoint: No charging station near");
	}
	
	return 0;
}