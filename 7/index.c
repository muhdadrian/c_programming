#include <stdio.h>

int main () 
{
	printf("%s %d %f %c\n", "Sam", 14, -8.76, 'X');
	//The string Sam needs quotation marks, as do all strings, and the character X needs single quotation marks, as do all characters.
	// strangely specific when it comes to floating-point numbers. Even though the - 8.76 has only two decimal places, C insists on printing six decimal places.
	return 0;
}