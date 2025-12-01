/*
Working with for

Enter 45 (for example) for the employees number at below. There will be 45 employees, 45 pay calculations, and 45 checks printed.
*/

#include <stdio.h>

int main(){

	int employees;
	int i;
	int cDown;

	printf("How many employees in the organization? ");
	scanf(" %d", &employees);

	// Loop to calculate payroll for each employee
	for (i=1; i <= employees; i++)
	{
		// Calculations for each employee follow...

		//for loops don't always count up as the preceding two did. This for loop counts down before printing a message:

		for (cDown = 10; cDown >= 0; cDown--)
		{
			printf("%d\n", cDown);
		}
		printf("Blast off!\n");


		return 0;
	}

}
