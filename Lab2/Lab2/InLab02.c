/*=======================================================
Programmer: Nolan Wong
Email: wong623@ourdue.edu
CNIT 105, InLab02
Program Description: Input/output program with several calculation operations
Academic Honesty:
I attest that this is my original work.
I have not used unauthorized source code, either modified or unmodified.
I have not given other fellow student(s) access to my program.
==========================================================*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main(void)
{
	int numStudents;
	float price, base, height, area, distance, time, speed;
	//prints info box
	printf("******************************\n* Nolan Wong                 *\n* wong623@purdue.edu         *\n* CNIT105 Assignment 01      *\n******************************\n\n");
	//requests user for number of students in CINT 105, then prints out the number after storing it in numStudents
	printf("Enter the number of students in the class: ");
	scanf("%d", &numStudents);
	printf("number of students: %d\n\n", numStudents);
	//requests user for price of a textbook, then prints out the price after storing it in price
	printf("Enter the price of a textbook: ");
	scanf("%f", &price);
	printf("price of a textbook: $%.2f\n\n", price);
	//requests user for base and height of a triangle, then prints out the area after storing it in base and height using formule base * height / 2
	printf("Enter the base and height of a triangle: ");
	scanf("%f %f", &base, &height);
	printf("Area of a triangle with a base of %.2f and height of %.2f is %.2f\n\n", base, height, 0.5 * base * height);
	//requests user for distance and time traveled of a car, then prints out the speed
	printf("Enter the distance car has traveled (in miles): ");
	scanf("%f", &distance);
	printf("Enter the time it traveled (in hours): ");
	scanf("%f", &time);
	printf("The speed of the car is %.2f miles per hour\n\n", distance / time);
	_getch();
	return 0;
}