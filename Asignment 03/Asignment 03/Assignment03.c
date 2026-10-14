/*=======================================================
Programmer: Nolan Wong
Email: wong623@purdue.edu
CNIT 105, Assignment 03
Program Description: Slanted pool area and volume calculator 
Academic Honesty:
I attest that this is my original work.
I have not used unauthorized source code, either modified or unmodified.
I have not given other fellow student(s) access to my program.
==========================================================*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include<math.h>

int main(void)
{
	float d1, d2, w, l; 
	//prints info box
	printf("******************************\n* Nolan Wong                 *\n* wong623@purdue.edu         *\n* CNIT105 Assignment 03      *\n******************************\n\n");
	printf("Please enter Depth 1 D1: ");
	scanf("%f", &d1);
	printf("Please enter Depth 2 D2: ");
	scanf("%f", &d2);
	//makes sure that D2 is greater than D1.
	if (d2 > d1) {
		printf("D2>D1, Enter W and L.... \n\n");
		printf("Please enter Width W: ");
		scanf("%f", &w);
		printf("Please enter Length L: ");
		scanf("%f", &l);
		printf("\n\nCalculating....\n\n");
		//Calculates side area of pool by using trapazoid area formula.
		printf("Side area of the pool is %.2f\n", (d1 + d2) * l / 2);
		//Calculates the bottom area of the pool by multiplying the length of the slanted side (everything in the sqrt) by the width of the pool
		printf("Bottom area of the pool is %.2f\n", sqrt(pow(d2 - d1, 2) + pow(l, 2))*w);
		//Calculates the volume of the pool by multiplying the side area by the width of the pool
		printf("Volume of the pool is %.2f\n", ((d1 + d2) * l / 2)*w);
	}
	else {
		//if D2 is not greater than D1, prints invalid input message
		printf("Invalid Input! D2 must be greater than D1.");
	}
	_getch();
	return 0;
}