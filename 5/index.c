#include <stdio.h>

int main () 
{
	printf("Column A\tColumn B\tColumn C");
	printf("\nMy Computer\'s Beep Sounds Like This: \a!\n");
	printf("\"Letz\b's fix that typo and then show the backslash ");//without z and b between the \ also works
	//it is important to note that using the \b escape sequence overwrites anything that was there. That’s why the 'z' does not appear in the output, but the 's' does.
	printf("character \\\" she said\n");
	return 0;
}