/*
This program will ask users to input test grades for the 25 students in a class and then compute an average test grade. If fewer than 25 students took the test, the user can enter -1 as a grade and break the loop, and only those entered grades will be used to compute the average.
*/

/*
The teacher had a lot of sick students that day! If all 25 students had shown up, the for loop would have ensured that exactly 25 test scores were asked for. However, because only five students took the test, the teacher had to let the program know, via a negative number in this case, that she was done entering the scores and that she now wanted an average.
*/

#include <stdio.h>

int main(){

	int numTest;
	float stTest, avg, total = 0.0;

	// Asks for up to 25 tests

	for (numTest = 0; numTest < 25; numTest++)
	{
		// Get the test scores, and check if -1 was entered

		printf("\nWhat is the next student's test score? ");
		scanf(" %f", &stTest);
		if (stTest < 0.0)
		{
			break;
		} 
		total += stTest;
	}

	avg = total / numTest;
	printf("\nThe average is %.1f%%.\n", avg);

	return 0;
} 

/*
To print the percent sign at the end of the final average, two % chars have to be used in the printf() control str. C interprets a percent sign as a control code unless you put two of them together, as done in this program. Then it still interprets the 1st percent sign as a control code for the second. In other words, the percent sign is a control code for itself.
*/

/*
What is the next student's test score? 89.9

What is the next student's test score? 92.5

What is the next student's test score? 51.0

What is the next student's test score? 86.4

What is the next student's test score? 78.6

What is the next student's test score? -1

The average is 79.7%.
*/