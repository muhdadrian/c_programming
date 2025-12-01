/* This program asks for a last name, and if the user has a last name that starts with a letter between P and Q, they will be sent to a special room for their tickets. */

#include <stdio.h>

int main () {

	// set up an array for the last name and then get it from the user

	char name[25];
	printf("What is your last name? ");
	printf("(Please capitalize the first letter!)");
	scanf(" %s", name);  // For a string array, you don't need the &

	// type name starts either with P or S
	if ((name[0] >= 'P') && (name[0] <= 'S'))

	// code to enable both upper and lower case
	//if ((name[0] >= 'P') && (name[0] <= 'S') || (name[0] >= 'p') && (name[0] >= 's'))
	{
		printf("You must go to room 2432 ");
		printf("for your tickets.\n");
	}
	else
	{
		printf("You can get your tickets here.\n");
	}
	return 0;
}

/*
How would the program be different if the && were changed to a ||? Would the first or the second message appear? The answer is the first one. Everybody would be sent to Room 2432. Any letter from A to Z is either more than P or less than S. The test in the preceding program has to be && because Room 2432 is available only to people whose names are between P and S.
*/

// Dont overdo the use of '!'. Most negative logic can be reversed (so < becomes >= and > becomes <=) to get rid of the not operator