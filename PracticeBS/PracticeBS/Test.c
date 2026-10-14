/*=======================================================
Programmer: Nolan Wong
Email: wong623@purdue.edu
CNIT 105
Program Description: Practice and crap
Academic Honesty:
I attest that this is my original work.
I have not used unauthorized source code, either modified or unmodified.
I have not given other fellow student(s) access to my program.
==========================================================*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int x = 0; x < 10-i; x++) {
			printf(" ");
		}
		for (int x = 0; x < i; x++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}