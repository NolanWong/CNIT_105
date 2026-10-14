/*=======================================================
Programmer: Nolan Changjun Wong
Email: Wong623@purdue.edu
CNIT 105, Assignment 01
Program Description: A program to print out some info about me and a large "CNIT".
Academic Honesty:
I attest that this is my original work.
I have not used unauthorized source code, either modified or unmodified.
I have not given other fellow student(s) access to my program.
===============================================================*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main(void)
{   
	//prints out the course at a large font size using smaller letters
    printf("    cccc\tIIIII  =============\n");
	printf(" ccc\t\t  I  \tT\n");
	for (int i = 0; i < 3; i++){
		printf("ccc\t\t  I   \tT\n");
	}
	printf(" ccc\t\t  I  \tT\n");
	printf("    cccc\tIIIII  \tT");
    return 0;
}