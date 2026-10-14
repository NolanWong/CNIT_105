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
	char choice = 'e';
	int endNum, totalEven, factorial;
	//prints info box
	printf("******************************\n* Nolan Wong                 *\n* wong623@purdue.edu         *\n* CNIT105 in lab 06          *\n******************************\n\n");
	while (choice != 'D' && choice != 'd') {
		//resets variables to 0 for each loop
		endNum = 0;
		totalEven = 0;
		factorial = 1;
		printf("\nFor Loops lab\n==================================\nA. Display and add even numbers from 1 to N\nB. Multiplication Table of N\nC. Descending triangle of numbers\nD. Exit\n\nEnter your choice: ");
		scanf(" %c", &choice);  // Note the space before %c to consume any leftover newline character
		if (choice == 'A' || choice == 'a') {
			printf("\nEnter a natural number for N: ");
			scanf("%d", &endNum);
			printf("Displaying even numbers from 1 to %d:\n", endNum);
			//starts at first even number and increments by two until the number is over the end number
			for (int x = 2; x <= endNum; x += 2) {
				printf("%d\n", x);
				totalEven += x;
			}
			printf("Sum of even numbers from 1 to %d is: %d\n", endNum, totalEven);
		}
		else if (choice == 'B' || choice == 'b') {
			printf("\nEnter a natural number for N: ");
			scanf("%d", &endNum);
			printf("Displaying multiplication table of %d:\n", endNum);
			//prints out x*N, where x is 1-10 and N is the end number
			for (int x = 1; x <= 10; x++) {
				printf("%d * %d = %d\n", endNum, x, endNum * x);
			}
		}
		else if (choice == 'C' || choice == 'c') {
			printf("Enter number of rows to print: ");
			scanf("%d", &endNum);
			//prints out numbers starting at N, N times, then decreasing with one less number each time until it reaches 1
			for (int x = endNum; x >= 1; x--) {
				for (int y = 1; y <= x; y++) {
					//prints out each number in the line
					printf("%d ", y);
				}
				//makes sure to make a new line.
				printf("\n");
			}
		}
		//invalid input check
		else if (choice != 'D' && choice != 'd') {
			printf("\nInvalid input!\nEnter a letter between A and D.\n");
		}
	}
	//after the above loop ends, says Goodbye
	printf("\nGoodbye!\n");
	_getch();
	return 0;
}