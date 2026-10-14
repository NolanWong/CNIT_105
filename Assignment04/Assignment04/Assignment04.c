/*=======================================================
Programmer: Nolan Wong
Email: wong623@purdue.edu
CNIT 105, Assignment 04
Program Description: Decay calculator
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
	int choice=0;
	float grams, decay, years, remain;
	//prints info box
	while (choice != 5) {
		printf("******************************\n* Nolan Wong                 *\n* wong623@purdue.edu         *\n* CNIT105 Assignment 04      *\n******************************\n\n");
		printf("Select a radioactive material:\n1. Uranium-233\n2. Radium-226\n3. Carbon-14\n4. Plutonium-210\n5. Exit\nEnter your choice (1-5): ");
		scanf("%d", &choice);
		//when choice is less than 5, the program runs
		if (choice < 5) {
			//assigns decay constant based on user input
			if (choice == 1) {
				decay = 4.35e-6;
				printf("\n	Material Chosen: Uranium-233\n\n");
			}
			else if (choice == 2) {
				decay = 4.33e-4;
				printf("\n	Material Chosen: Radium-226\n\n");
			}
			else if (choice == 3) {
				decay = 1.21e-4;
				printf("\n	Material Chosen: Carbon-14\n\n");
			}
			else if (choice == 4) {
				decay = 1.83;
				printf("\n	Material Chosen: Plutonium-210\n\n");
			}
			//gets grams of radioactive material and time elapsed in years from user
			printf("	Enter initial amount of material (grams): ");
			scanf("%f", &grams);
			printf("	Enter time elapsed (years): ");
			scanf("%f", &years);
			//stores the remaining radoactive material in a variable for efficency
			remain = grams * exp(-decay * years);
			//simulation results 
			printf("\n	--- Decay Simulation Results ---\n");
			printf("	initial amount: %.2f grams\n", grams);
			printf("	Time elapsed: %.2f years\n", years);
			printf("	Remaining amount: %.2f grams\n", remain);
			printf("	Half-life: %.2f years\n", log(2) / decay);
			printf("	Activity: %.2f decays/year\n\n", decay*grams*exp(-decay * years));
			//if remaining radioactive maerial is one or more grams, the safe level is not reached, otherwise it is reached
			if (remain >= 1) {
				printf("	Safe Level NOT reached!\n\n");
			}
			else {
				printf("	Safe level reached!\n\n");
			}
		}
		//invalid input check.
		else {
			printf("Invalid choice! Please enter a number between 1 and 5.\n\n");
		}
	}
	//prints exit message after while loop concludes.
	printf("Exiting program.\n");
	_getch();
	return 0;
}