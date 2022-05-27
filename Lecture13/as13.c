#include <stdio.h>
#include <math.h>

//Outer structure line
struct line
{
	//variables
	float midpoint[2];
 	float slope;
 	float distance;
 	float intercept;

 	//Inner structure point
	struct point
	{
		//variables
		float x;
		float y;
	}point1, point2; //variable names for the structure point
};

//function declarations
float solveSlope(struct line line1);
void solveMidpoint(struct line line1);
float solveDistance(struct line line1);
float getSlopeInterceptForm(struct line line1);

int main()
{
	//declaration of variable line1 
	struct line line1;
	//User input
	printf("Enter x and y for point 1:\n");
	scanf("%f%f", &line1.point1.x, &line1.point1.y); //Access the variables inside the structure

	printf("Enter x and y for point 2:\n");
	scanf("%f%f", &line1.point2.x, &line1.point2.y); //Access the variables inside the structure

	printf("\nSlope: %f", solveSlope(line1)); //calls the function solveSlope
	printf("\nMidpoints: ");
	solveMidpoint(line1); //calls the function solveMidpoint
	printf("\nDistance between two points: %f", solveDistance(line1)); //calls the function solveDistance
	printf("\ny = %fx + %f\n", solveSlope(line1), getSlopeInterceptForm(line1)); //calls the function solveSlope and getSlopeInterceptForm
																				 //which are essential to the printing of the slope intercept form
	return 0;
}

//Functions
float solveSlope(struct line line1){
	//Access the variables in the structure then solve and stores it into the slope variable in the structure for line1
	line1.slope = (line1.point2.y - line1.point1.y)/(line1.point2.x - line1.point1.x);
	return line1.slope; //returns the value
}

void solveMidpoint(struct line line1){
	//Access the variables in the structure then solve and stores it into the midpoint array variable in the structure for line1
	line1.midpoint[0] = (line1.point1.x + line1.point2.x)/2;
	line1.midpoint[1] = (line1.point1.y + line1.point2.y)/2;

	//prints the two elements of the midpoint array inside the structure for line1
	printf("%f\t%f", line1.midpoint[0], line1.midpoint[1]);
}

float solveDistance(struct line line1){
	float x_2 = pow(line1.point1.x - line1.point2.x, 2.0); //x^2
	float y_2 = pow(line1.point1.y - line1.point2.y, 2.0); //y^2
	line1.distance = sqrt(x_2 + y_2); //solves for the sqrt and stores it into the distance variable in the structure for line1

	return line1.distance; //returns the value
}

float getSlopeInterceptForm(struct line line1){
	//Access the variables in the structure then solve and stores it into the intercept variable in the structure for line1
	line1.intercept = line1.point1.y - solveSlope(line1) * line1.point1.x;
	return line1.intercept;
}