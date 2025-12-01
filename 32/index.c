/*
do..while

while also can be used in conjunction with the do statement. When used as a pair, the statements normally are called do...while statements or the do...while loop. The do...while behaves almost exactly like the while loop.
*/

/*
This program will multiply two numbers and display the result for as long as the user wants. Answering 'N' will break the loop.
*/

#include <stdio.h>

int main()
{
	float num1, num2, result;
	char choice;

	do {

		printf("Enter your first number to multiply: ");
		scanf("%f", &num1);

		printf("Enter your second number to multiply: ");
		scanf("%f", &num2);

		result = num1 * num2;

		printf("%.2f times %.2f equals %.2f\n\n", num1, num2, result);
		printf("Do you want to enter another pair of numbers ");
		printf("to multiply (Y/N): ");
		scanf("%c", &choice);
		// If the user enters a lowercase n, this if statement will convert it to an N
		if(choice == 'n')
		{
			choice = 'N';
		}
	}while (choice != 'N');

	return 0;

}

/*
you use the do...while loop construct instead of while when you want to ensure that the code within the loop executes at least once.

so after getting two floating-point numbers from the user and displaying the result, the program asks tbe user if he or she wants to multiply two new numbers. If the user enters Y (or any character other than N), the loop begins again from the beginning.

converting a lowercase n to N is not the only way you could account for this possibility. You could also use a logical AND operator in the while portion of the loop, as follows:

} while (choice != 'N' && choice != 'n'); -- this is telling the program to keep running as long as the choice is not an uppercase N or a lowercase n.
*/

/*

*/
