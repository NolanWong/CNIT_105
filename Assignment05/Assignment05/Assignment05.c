/*=======================================================
Programmer: Nolan Wong
Email: wong623@purdue.edu
CNIT 105, Assignment 05
Program Description: Misc loop and conditional statements
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
	int choice = 0, sum, n;
	//prints info box
	while (choice != 5) {
		//sets sum var for op 1 and 2 to 0 for continuity of program
		sum = 0;
		printf("**********************************************************************\nAssingment 5: While Loop\n**********************************************************************\n");
		printf("\t1. Print sum of Even natural numbers from 1 to N\n\t2. Sum of Squares of even natural numbers between 1 to N\n\t3. Check if number N is a prime number\n\t4. Print the multiplication table of N\n\t5. Exit\n**********************************************************************\n\nEnter your choice: ");
		scanf("%d", &choice);
		//when choice is less than 5, the program runs
		if (choice < 5 && choice > 0) {
			printf("\n**********************************\nEnter a natural number for N: ");
			scanf("%d", &n);
			//Performes chosen operation
			if (choice == 1) {
				//sum of even natural numbers: goes through all even numbers and adds them to the sum variable
				printf("Displaying even natural numbers from 1 to %d\n", n);
				for (int x = 2; x <= n; x += 2) {
					sum += x;
					printf("%d\n", x);
				}
				//in the assingment, this says odd instead of even in the sample screen captures.
				printf("\nThe sum of even natural numbers from 1 to %d is %d\n", n, sum);
			}
			else if (choice == 2) {
				//sum of squares of even natural numbers: goes through all even numbers and adds the square of each to the sum variable
				printf("Displaying the squares of even natural numbers from 1 to %d\n", n);
				for (int x = 2; x <= n; x += 2) {
					sum += (x * x);
					printf("%d\n", x*x);
				}
				printf("\nThe sum of squares of even natural numbers from 1 to %d is %d\n", n, sum);
			}
			else if (choice == 3) {
				//prime number: prime numbers are any number not evenly divisible by 2,3,5,7 and not equal to 1. Modulous is a good way to check if a division is clean.
				if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0 && n % 7 != 0 && n != 1) {
					printf("\n\n%d is a prime number.\n", n);
				}
				else {
					printf("\n\n%d is not a prime number.\n", n);
				}
			}
			else if (choice == 4) {
				//multiplication table: Goes one by one until ten printing out the multiplacation equations
				for (int x = 1; x <= 10; x++) {
					printf("%d * %d = %d\n", n, x, n * x);
				}
			}
			
		}
		//invalid input check.
		else if (choice != 5) {
			printf("Invalid choice! \nEnter one of the numbers in the menu.\n");
		}
	}
	//prints exit message after while loop concludes.
	printf("Goodbye!\n");
	_getch();
	return 0;
}