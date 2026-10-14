/*=======================================================
Programmer: Nolan Wong
Email: wong623@ourdue.edu
CNIT 105, Assignment 02
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
	int ft, in;
	float weight, tempC, tempF, mi, yd;
	//prints info box
	printf("******************************\n* Nolan Wong                 *\n* wong623@purdue.edu         *\n* CNIT105 Assignment 02      *\n******************************\n\nConversion Calculator\n===================================\n");
	//gets weight in pounds and converts it to kilograms
	printf("Converting pounds to kilograms\n");
	printf("Enter the weight in pounds: ");
	scanf("%f", &weight);
	printf("The weight entered is %.2f lbs and is equivalent to %.2f kg\n\n", weight, weight * 0.45359237);

	//gets temperature in Celsius and converts it to Fahrenheit
	printf("Converting degrees Celsius to Fahrenheit\n");
	printf("Enter the temperature in Celsius: ");
	scanf("%f", &tempC);
	tempF=tempC * 9 / 5 + 32;
	printf("The temperature entered is %.1f C and is equivalent to %.1f F\n\n", tempC, tempF);

	//gets height in feet and inches and converts to centimeters
	printf("Converting height to centimeters\n");
	printf("Enter the height in feet: ");
	scanf("%d", &ft);
	printf("Now enter the height in inches: ");
	scanf("%d", &in);
	printf("The height entered is %d feet %d inches and is equivalent to %.2f cm\n\n", ft, in, (ft * 12 + in) * 2.54);

	//gets distance in miles and converts it to kilometers
	printf("Converting miles to kilometers\n");
	printf("Enter the distance in miles: ");
	scanf("%f", &mi);
	printf("The distance entered is %.0f mi and is equivalent to %.1f km\n\n", mi, mi * 1.609);

	//gets distance in yards and converts it to meters
	printf("Converting yards to meters\n");
	printf("Enter the distance in yards: ");
	scanf("%f", &yd);
	printf("The distance entered is %.0f yd and is equivalent to %.2f m\n\n", yd, yd * 0.9144);
	_getch();
	return 0;
}