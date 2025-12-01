// printf() sends data to the screen.
// scanf() function gets data from the keyboard.
// scanf() fills vars with values typed by the user.
// when program gets to scanf(), C stops and waits for the user to type values.
// the vars listed inside scanf() will accept whatever values the user types.
// scanf() quits when the user presses Enter after typing values.


#include <stdio.h>

int main () 
{
	// Set up the vars that scanf will fill

	char firstInitial;
	char lastInitial;
	int age;
	int favorite_number;

	// make a space before %c and %d in scanf to make it work
	// it's a good habit to add the extra space
	
	printf("What letter does your first name begin with?\n");
	scanf(" %c", &firstInitial);

	printf("What letter does your last name begin with?\n");
	scanf(" %c", &lastInitial);

	printf("How old are you?\n");
	scanf(" %d", &age);

	printf("What is your favorite number (integer only)?\n");
	scanf(" %d", &favorite_number);

	printf("\nYour initials are %c.%c. and you are %d years old", firstInitial, lastInitial, age);
	printf("\nYour favorite number is %d.\n\n", favorite_number);

	return 0;
}
