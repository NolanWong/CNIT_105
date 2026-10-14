/*=======================================================
Programmer: Nolan Wong
Email: wong623@purdue.edu
CNIT 105, Lab 04
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
	int menu, time, rate;
	float principal, interest;
	//prints info box
	printf("******************************\n* Nolan Wong                 *\n* wong623@purdue.edu         *\n* CNIT105 in lab 04          *\n******************************\n\n");

	//menu selection
	printf("Interest Options\n=========================");
	printf("\n1. Simple Interest");
	printf("\n2. Compound Interest");
	printf("\n\n\nEnter your selection: ");
	scanf("%d", &menu);
	if (menu == 1)
	{
		printf("\nSelected Option - SIMPLE INTEREST\n");
		printf("\n\t --- Enter the principal amount: ");
		scanf("%f", &principal);
		printf("\n\t --- Enter the interest rate: ");
		scanf("%f", &interest);
		printf("\n\t --- Enter the time in years: ");
		scanf("%d", &time);
		printf("\n\n---------------------------------------\n\nThe simple interest is: $%.2f\n\n---------------------------------------", principal * (1 + (interest * time)));
	}
	else if (menu == 2)
	{
		printf("\nSelected Option - COMPOUND INTEREST\n");
		printf("\n\t --- Enter the principal amount: ");
		scanf("%f", &principal);
		printf("\n\t --- Enter the interest rate: ");
		scanf("%f", &interest);
		printf("\n\t --- Enter the time in years: ");
		scanf("%d", &time);
		printf("\n\t --- Enter the number of terms per year: ");
		scanf("%d", &rate);
		printf("\n\n---------------------------------------\n\nThe compound interest is: $%.2f\n\n---------------------------------------", principal * pow((1 + (interest / rate)), time * rate));
	}
	else
	{
		printf("\n\nNot a valid input. Enter options 1 or 2 !!\n");
	}
	_getch();
	return 0;
}