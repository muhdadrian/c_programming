/*
1. getchar() -- gets a single character from the keyboard

2. putchar() -- sends a single char to the screen

# always include the stdio.h header file when using this chapter's I/O functions, just as you do for printf() and scanf().
 */

/*
1. the name getchar() sounds like "get character"

2. putchar() sounds like "put character"
 */

/*
1. putchar() prints each element of the char array in sequence (the program prints 'C is fun').

2. strlen() is used to ensure that the for doesn't output past the end of the str.
 */

/*
- the program below is to demonstrate the putchar() function.

- putchar() is defined in stdio.h.

- string.h is needed for the strlen() function. 
 */

#include <stdio.h>
#include <string.h>

int main()
{
	int i;
	char msg[] = "C is fun";

	for (i = 0; i < strlen(msg); i++)
	{
		putchar(msg[i]); //Outputs a single character
	}
		putchar('\n'); // One line break after the loop is done.

	return 0;
}

