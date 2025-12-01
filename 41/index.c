/*
This program presents a menu of choices, gets the user's choice, and then uses the switch statement to execute a line or two of code based on that choice. What the user wants to do is not truly implemented - it is just a series of stubs to teach the value of the switch statement. 
*/

//add <stdlib.h> with the #include directive in every program that uses exit().

#include <stdio.h>
#include <stdlib.h>

int main()
{

	int choice;

	printf("What do you want to do?\n");
	printf("1. Add New Contact\n");
	printf("2. Edit Existing Contact\n");
	printf("3. Call Contact\n");
	printf("4. Text Contact\n");
	printf("5. Exit\n");
	do
	{
		
		printf("Enter your choice: ");
		scanf(" %d", &choice);
		switch (choice)
		{
			case (1): printf("\nTo add you will need the ");
								printf("contact's\n");
								printf("First name, last name, and number.\n");
								break;
			case (2): printf("\nGet ready to enter the name of ");
								printf("name of the\n");
								printf("contact you wish to change.\n");
								break;
			case (3): printf("\nWhich contact do you ");
								printf("wish to call?\n");
								break;
			case (4): printf("\nWhich contact do you ");
								printf("wish to text?\n");
								break;
			case (5): exit(1); //Exits the program early
			default: 	printf("\n%d is not a valid choice.\n", choice);
							 	printf("Try again.\n");
								break;
		}
	} while ((choice < 1) || (choice > 5));

	return 0;
}

// The case statements determine courses of action based on the value of choice. For example, if choice equals 3, the message 'Which contact do you wish to call?' prints. If choice equals 5, the program quits using the built-in exit() function. 

// The switch var can be either an int or a char var. Do not use a float or a double for the switch test.