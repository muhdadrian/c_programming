/*
The break and continue statements let you control loops for those special occasions when you want to quit a loop early or repeat a loop sooner than it would normally repeat.

Typically, break appears in the body of an if statement.

The purpose of break is to terminate the current loop. When a loop ends, the code following the body of the loop takes over. 

When break appears inside a loop's body, break terminates that loop immediately, and the rest of the program continues.
*/

//Here isa for loop that normally would print 10 numbers. Instead of printing 10, however, the break causes the loop to stop after printing 5 numbers.

#include <stdio.h>


int main(){

	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d \n", i);
		if (i == 4)
		{
			break;
		}
	}
	//Rest of the program would follow.

	return 0;
} 
