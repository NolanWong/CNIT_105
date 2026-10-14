/*=======================================================
Programmer: Nolan Wong
Email: wong623@purdue.edu
CNIT 105, Lab 03
Program Description: Input/output program with several calculation operations
Academic Honesty:
I attest that this is my original work.
I have not used unauthorized source code, either modified or unmodified.
I have not given other fellow student(s) access to my program.
==========================================================*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void)
{
	int r1, r2, h, s;
	float latArea, surfArea, volume, pi = 3.14159;
	//prints info box
	printf("******************************\n* Nolan Wong                 *\n* wong623@purdue.edu         *\n* CNIT105 in lab 03          *\n******************************\n\n");
	
	//gets inputs for basic values of truncated cone
	printf("Please enter the inputs for the cone -\n\tradius (r1): ");
	scanf("%d", &r1);
	printf("\t height (h): ");
	scanf("%d", &h);
	printf("\t slant height (s): ");
	scanf("%d", &s);
	printf("\t radius (r2): ");
	scanf("%d", &r2);
	
	//calculates the properties of the cone
	volume = (1.0/3.0) * pi * h * (pow(r1,2) + pow(r2,2) + (r1 * r2));
	latArea = s * pi * (r1 + r2);
	surfArea = latArea + pi * (pow(r1,2) + pow(r2,2));

	//prints the properties of the cone
	printf("\nproperties of the cone -\n\tVolume : %.2f\n\tLateral Area : %.2f\n\tTotal Surface Area : %.2f", volume, latArea, surfArea);
	_getch();
	return 0;
}