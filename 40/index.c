// break causes a loop to break early, continue forces a loop to continue early.
// continue will force a new cycle of a loop. 

/*
This program loops through 10 numbers and prints a message that varies whether the program is odd or even. It tests for odd and if the number is odd, it prints the odd message and then starts the next iteration of the loop using continue. Otherwise, it prints the even message.
*/

#include <stdio.h>

int main()
{

	int i;

	// Loops through the numbers 1 through 10

	for (i = 1; i <= 10; i++)
	{
		if ((i%2) == 1) //Odd numbers have a reminder of 1
		{
			printf("I'm rather odd...\n");
			// Will jump to the next iteration of the loop
			continue;
		}
		printf("Even up!\n");
	}

	return 0;
}

// you use continue only in some cycles of the loop