/* This program asks for a number from 1 to 100 and tells then whether or not their choice is equally divisible by 2 through 9. */

#include <stdio.h>

int main ()
{
	// Define the integer to hold the user's guess and then get it from the user

	int numPick;

	printf("Pick an integer between 1 and 100 ");
	printf("(The higher the better!)\n");
	scanf("%d", &numPick); //remember for an int, you do need the &

	printf("%d %s divisible by 2.", numPick, (numPick % 2 == 0) ? ("is") : ("is not"));
	printf("\n%d %s divisible by 3.", numPick, (numPick % 3 == 0) ? ("is") : ("is not"));
	printf("\n%d %s divisible by 4.", numPick, (numPick % 4 == 0) ? ("is") : ("is not"));
	printf("\n%d %s divisible by 5.", numPick, (numPick % 5 == 0) ? ("is") : ("is not"));
	printf("\n%d %s divisible by 6.", numPick, (numPick % 6 == 0) ? ("is") : ("is not"));
	printf("\n%d %s divisible by 7.", numPick, (numPick % 7 == 0) ? ("is") : ("is not"));
	printf("\n%d %s divisible by 8.", numPick, (numPick % 8 == 0) ? ("is") : ("is not"));
	printf("\n%d %s divisible by 9.\n", numPick, (numPick % 9 == 0) ? ("is") : ("is not"));

	return 0;
}

// Although the printf() statement asks for the number to be between 1 and 100, users actually can enter an integer.

// my solution, I did omit the () in is and is not:
// printf("%d %s divisible by 3.\n", numPick, (numPick % 3 == 0) ? "is" : "is not");
