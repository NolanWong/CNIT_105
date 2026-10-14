/*=======================================================
Programmer: Nolan Changjun Wong
Email: Wong623@purdue.edu
CNIT 105, Assignment 01
Program Description: A program to print out some info about me and a large "CNIT" using small letters.
Academic Honesty:
I attest that this is my original work.
I have not used unauthorized source code, either modified or unmodified.
I have not given other fellow student(s) access to my program.
===============================================================*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main()
{
	//prints info box
	printf("******************************\n* Nolan Wong                 *\n* wong623@purdue.edu         *\n* CNIT105 Assignment 01      *\n******************************\n\n");
	//prints out the the first and second line of the course number
	printf("    cccc\tIIIII    =============\n ccc\t\t  I            T\n");
	//loops printing the middle three lines
	for (int i = 0; i < 3; i++) {
		printf("ccc\t\t  I            T\n");
	}
	printf(" ccc\t\t  I            T\n    cccc\tIIIII          T\n\n\n");
	//I decided to try splitting the number into three segments with loops making the vertical lines
	for (int x = 0; x < 3; x++) {
		//This conditional makes it so the middle of the 0 and all three horizontals of the 5 to print correctly (if this didn't exist, it would print "185")
		if (x != 1) {
			printf("     1\t     00000000\t  55555555\n");
		}
		else {
			printf("     1\t     0      0\t  55555555\n");
		}
		//this loop prints the verticals of 0 & 5, alongside the parts of "1" that are in those lines. 
		for (int i = 0; i < 3; i++) {
			//this conditional makes it so the verticals of the 5 are on the correct sides (if this wasn't here, it would print "10E" or "103")
			if (x == 0) {
				printf("     1\t     0      0\t  5       \n");
			}
			else if (x == 1){
				printf("     1\t     0      0\t         5\n");
			}
		}
		
	}
	_getch();
	return 0;
}