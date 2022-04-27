#include <stdio.h>

#define N_REVIEWERS 3
#define N_MOVIES 4

int main()
{
	double sum_per_reviewer, ave_per_reviewer

	double ratings[N_REVIEWERS][N_MOVIES] = {
		{4, 6, 2, 5},
		{7, 9, 4, 9},
		{6, 9, 3, 7}
	};

	for (int movie = 0; movie<N_MOVIES; movie++){
		sum_per_movie=0;

		for (int reviewer = 0; reviewer < N_REVIEWERS; reviewer++)
		{
			sum_per_movie += ratings[reviewer][movie];
		}

		ave_per_movie = sum_per_movie/N_REVIEWERS;
		printf("---Average of movie%d is %.1f", movie+1, ave_per_movie);
	}	
	return 0;
}