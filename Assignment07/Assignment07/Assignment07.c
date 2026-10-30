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
int factorial(int n)
{
	int total = 1;
	//starting at two, multiply total by each number up to n. If n is 0 or 1, return 1.
	if (n != 0 && n != 1) {
		for (int x = 2; x <= n; x++)
		{
			total*=x;
		}
	}
	return total;
}
float minimumNo(float a, float b, float c) {
	//checks to see if a is less than b and c, if so return a. If not, check if b is less than a and c, if so return b. If not, return c.
	if (a < b && a < c) {
		return a;
	}
	else if (b < a && b < c) {
		return b;
	}
	else{
		return c;
	}
}
int digits(int n) {
	int count = 0;
	//divides the number by 10 until it reaches 0, counting the number of times it can be divided
	//0<n<1 is never true for ints.
	while (n != 0) {
		n /= 10;
		count++;
	}
	return count;
}

int main(void)
{
	//Vars for main:
	int choice = 0,numInt, numFloat;
	//prints info box
	DisplayMyInfo();
	while (choice != 4) {
		//prints menu
		printf("1. Compute the Factorial\n2. find the minimum of three numbers\n3. Determine and Display the Number of digits in a given number\n4. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		if(choice== 1) {
			printf("Enter a natural number for n: ");
			scanf("%d", &numInt);
			//calls factorial function and prints result
			printf("%d! = %d\n", numInt, factorial(numInt));
			continue;
		}
		if(choice== 2) {
			printf("Enter three natural numbers: ");
			float a, b, c;
			scanf("%f %f %f", &a, &b, &c);
			//calls minimumNo function and prints result
			printf("The smallest numbers in %.0f, %.0f, and %.0f is %.0f\n", a, b, c, minimumNo(a, b, c));
			continue;
		}
		if(choice== 3) {
			printf("Enter a natural number: ");
			scanf("%d", &numInt);
			//calls digits function and prints result
			printf("Number of digits in %d is %d\n", numInt, digits(numInt));
			continue;
		}
		if(choice== 4) {
			printf("Exiting program.\n");
			break;
		}
		else{
			printf("Invalid choice. Please try again.\n");
		}
	}
	return 0;
}