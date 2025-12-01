#include <stdio.h>

/* conversion character
- %d (integer)
- %f (floating-point)
- %c (character)
- %s (string)
*/

int main () 
{
	printf("%d roses cost %.2f per %d\n", 24, 19.95, 12);
	//Strings and characters have their own conversion characters as well. Although you don’t need %s to print strings by themselves, you might need %s when printing strings combined with other data. 
	return 0;
}