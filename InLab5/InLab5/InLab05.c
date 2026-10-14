/*=======================================================
Programmer: Nolan Wong
Email: wong623@purdue.edu
CNIT 105, Lab 05
Program Description: Misc math operations and calculations
Academic Honesty:
I attest that this is my original work.
I have not used unauthorized source code, either modified or unmodified.
I have not given other fellow student(s) access to my program.
==========================================================*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int choice=0, endNum, totalOdd, countOdd, factorial;
	//prints info box
	printf("******************************\n* Nolan Wong                 *\n* wong623@purdue.edu         *\n* CNIT105 in lab 05          *\n******************************\n\n");
	while (choice != 4) {
		endNum = 0;
		totalOdd = 0;
		countOdd = 0;
		factorial = 1;
		printf("\nWhile Loops lab\n**************************************\n\t1. Print all natural numbers from 1 to N\n\t2. Add odd numbers from 1 to N and display the sum and the average\n\t3. Find the factorial of N\n\t4. Exit\n\nPlease enter your choice: ");
		scanf("%d", &choice);
		printf("**************************************\n");
		if (choice == 1) {
			printf("\nEnter a natural number for N: ");
			scanf("%d", &endNum);
			printf("Displaying natural numbers from 1 to %d:\n", endNum);
			for (int x = 1; x <= endNum; x++) {
				printf("%d\n", x);
			}
		}
		else if (choice == 2) {
			printf("\nEnter a natural number for N: ");
			scanf("%d", &endNum);
			printf("Displaying odd numbers from 1 to %d:\n", endNum);
			for (int x = 1; x <= endNum; x++) {
				if (x % 2 != 0) {
					totalOdd += x;
					countOdd++;
					printf("%d\n", x);
				}
			}
			printf("\nThe sum of odd numbers from 1 to %d is %d\n", endNum, totalOdd);
			printf("The average of odd numbers from 1 to %d is: %.2f\n", endNum, (float)totalOdd / countOdd);
		}
		else if (choice == 3) {
			printf("Enter a natural number for N: ");
			scanf("%d", &endNum);
			for (int x = 1; x <= endNum; x++) {
				factorial *= x;
			}
			printf("\nThe factorial of %d is %d\n\n", endNum, factorial);
		}
		else if (choice == 4) {
			printf("\nGoodbye!\n");
		}
		else {
			printf("\nInvalid input!\nEnter a number between 1 and 4.\n");
		}
	}
	_getch();
	return 0;
}