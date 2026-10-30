/*=======================================================
Programmer: Nolan Wong
Email: wong623@purdue.edu
CNIT 105, Lab 07
Program Description: 1D array showcase
Academic Honesty:
I attest that this is my original work.
I have not used unauthorized source code, either modified or unmodified.
I have not given other fellow student(s) access to my program.
==========================================================*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//size constant
#define SIZE 5

void DisplayMyInfo(void)
{
	//prints info box
	printf("******************************\n* Nolan Wong                 *\n* wong623@purdue.edu         *\n* CNIT105 in lab 07          *\n******************************\n\n");
}
int main() {
	DisplayMyInfo();
	//declare array
	int nums[SIZE], min;
	float sum = 0;
	//populate
	for (int i = 0; i < SIZE; i++) {
		printf("Enter a whole number: ");
		scanf("%d", &nums[i]);
	}
	printf("\ncontent of array data:\n=======================\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%d\t", nums[i]);
	}
	//average
	for (int i = 0; i < SIZE; i++) {
		sum += nums[i];
	}
	printf("\nAverage of the array is: %.2f\n", sum / SIZE);
	//find minimum
	min = nums[0];
	for (int i = 1; i < SIZE; i++) {
		if (nums[i] < min) {
			min = nums[i];
		}
	}
	printf("Minimum of the array is: %d\n", min);
	// find each element -3
	for (int i = 0; i < SIZE; i++) {
		nums[i] -= 3;
	}
	printf("\n\nDecreased elements are:\n========================\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%d\t", nums[i]);
	}
	printf("\n");
}