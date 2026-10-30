/*=======================================================
Programmer: Nolan Wong
Email: wong623@purdue.edu
CNIT 105, Lab 07
Program Description: Triangle perimeter calculator
Academic Honesty:
I attest that this is my original work.
I have not used unauthorized source code, either modified or unmodified.
I have not given other fellow student(s) access to my program.
==========================================================*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void DisplayMyInfo(void)
{
	//prints info box
	printf("******************************\n* Nolan Wong                 *\n* wong623@purdue.edu         *\n* CNIT105 in lab 07          *\n******************************\n\n");
}

int Validate(float x, float y, float z)
{
	//checks if x is greater than y and y is greater than z
	if (x+z > y && x+y > z && y+z > x)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

float ComputePerimeter(float x, float y, float z)
{
	//calculates perimeter
	return x + y + z;
}

int main(void)
{
	float side1, side2, side3;
	//prints info box
	DisplayMyInfo();
	//makes sure 
	while (1) {
		printf("Enter the side A of the triangle: ");
		scanf("%f", &side1);
		//after getting a side, checks to see if the vallue to exit was given
		if (side1 == -1)
		{
			printf("Goodbye!\n");
			break;
		}
		printf("Enter the side B of the triangle: ");
		scanf("%f", &side2);
		if (side2 == -1)
		{
			printf("Goodbye!\n");
			break;
		}
		printf("Enter the side C of the triangle: ");
		scanf("%f", &side3);
		if (side3 == -1)
		{
			printf("Goodbye!\n");
			break;
		}
		printf("\nValidating...\n\n");
		//checks if the sides are valid, if not, it will ask for new sides
		if (Validate(side1, side2, side3) == 0)
		{
			printf("Invalid triangle sides. Please input valid sides.\n\n");
		}
		else {
			printf("The sides are a tringle! Perimeter of the triangle is: %.2f\n\n", ComputePerimeter(side1, side2, side3));
			continue;
		}
	}
	return 0;
}