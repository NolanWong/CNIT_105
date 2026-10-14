/*=======================================================
Programmer: Nolan Wong
Email: wong623@purdue.edu
CNIT 105, Assignment 06
Program Description: For loops demo
Academic Honesty:
I attest that this is my original work.
I have not used unauthorized source code, either modified or unmodified.
I have not given other fellow student(s) access to my program.
==========================================================*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char choice = 'f';
	int startNum, endNum, totalEven, factorial;
	//prints info box
	printf("******************************\n* Nolan Wong                 *\n* wong623@purdue.edu         *\n* CNIT105 Assignment 06      *\n******************************\n\n");
	while (choice != 'E' && choice != 'e') {
		//resets variables to 0 for each loop
		startNum = 0;
		endNum = 0;
		factorial = 1;
		printf("\nFor Loops Assignment\n==================================\nA. Display odd natural numbers from N1 to N2\nB. Find factorial of N\nC. Display right angled triangle of stars\nD. Display reverse centered triangle of stars\nE. Exit\n\nEnter your choice: ");
		scanf(" %c", &choice);  // Note the space before %c to consume any leftover newline character
		if (choice == 'A' || choice == 'a') {
			printf("\nEnter a natural number for N1: ");
			scanf("%d", &startNum);
			printf("Enter a natural number for N2: ");
			scanf("%d", &endNum);
			printf("Displaying odd numbers from %d to %d:\n", startNum, endNum);
			if (startNum % 2 == 0) {
				startNum++; // If startNum is even, increment to make it odd
			}
			//starts at first odd number and increments by two until the number is over the end number
			for (int x = startNum; x <= endNum; x += 2) {
				printf("%d\n", x);
			}
		}
		else if (choice == 'B' || choice == 'b') {
			printf("\nEnter a natural number for N: ");
			scanf("%d", &endNum);
			//prints out the factorial of the number
			for (int x = 2; x <= endNum; x++) {
				//multiplies the factorial variable by each number from 2 to the end number
				factorial *= x;
			}
			printf("Factorial of %d is: %d\n", endNum, factorial);
		}
		else if (choice == 'C' || choice == 'c') {
			printf("Enter number of rows to print: ");
			scanf("%d", &endNum);
			//prints out numbers starting at N, N times, then decreasing with one less number each time until it reaches 1
			for (int x = 1; x <= endNum; x++) {
				for (int y = 1; y <= x; y++) {
					//prints out each number in the line
					printf("*");
				}
				//makes sure to make a new line.
				printf("\n");
			}
		}
		else if (choice == 'D' || choice == 'd') {
			printf("Enter number of rows to print: ");
			scanf("%d", &endNum);
			for (int x = 0; x < endNum; x++) {
				//prints out spaces before the stars to center the triangle, starting from zero for the first line.
				for (int y = 0; y < x; y++) {
					printf(" ");
				}
				//prints out each star in the line
				//to explain the logic, because this took me 20 mins to figure out: the first row is endnum*2-1, but the next row is endnum*2-3, then endnum*2-5 in a three row triangle. I then realised that if I reduced the endnum var in the equation by the row number before multiplying by two, it would operate correctly.
				//EX: row one stars= (endnum-0)*2-1 = endnum*2-1, row two stars = (endnum-1)*2-1 = endnum*2-3, row three stars = (endnum-2)*2-1 = endnum*2-5
				for (int z = 0; z < (endNum-x) *2 -1; z++) {
					printf("*");
				}
				//makes sure to make a new line.
				printf("\n");
			}
		}
		//invalid input check
		else if (choice != 'E' && choice != 'e') {
			printf("\nInvalid input!\nEnter a letter between A and E.\n");
		}
	}
	//after the above loop ends, says Goodbye
	printf("\nGoodbye!\n");
	_getch();
	return 0;
}