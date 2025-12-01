// the getchar() function returns the char input from the keyboard. Therefore, you usually assign the char to a var or do something else with it.

// the program below gets one char at a time from the keyboard and stores the collected chars in a char array. A series of putchar() functions then prints the array backward.

// the program below is to demonstrate the getchar() function.

// getchar() is defined in stdio.h

// string.h is needed for the strlen() function

#include <stdio.h>
#include <string.h>

int main()
{
	int i;
	char msg[25];

	printf("Type up to 25 characters and then press Enter...\n");
	for (i = 0; i < 25; i++)
	{
		msg[i] = getchar(); //Outputs a single character 
		
		if (msg[i] == '\n')
		{
			i--;
			break;
		} 
	}
	putchar('\n'); // One line break after the loop is done.

	for (;i >= 0; i--)
	{
		putchar(msg[i]);
	}
	putchar('\n');
return 0;
}

// the 2nd for loop var i has no initial value. Actually, it does. i contains the last array subscript entered in the previous getchar() for loop. Therefore, the second for loop continues with the value of i left by the first for loop.

// the getchar() input char typically is defined as an int, as done above. Integers and characters are about the only C data types you can use interchangeably without worry of typecasts.

// in some advanced applications, getchar() can return a value that won't work in a char data type, so you're safe if you use int.

// the program keeps getting a character at a time until the user presses Enter (which produces a newline \n escape sequence). 'break' stops the loop.