#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main()
{
	float number1, number2;
	printf("enter two numbers: ");
	scanf("%f%f", &number1, &number2);
	printf("%.2f + %.2f = %.2f\n", number1, number2, number1 + number2);
	_getch();
	return 0;
}