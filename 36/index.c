/*
The following code produces an interesting effect: 
*/

#include <stdio.h>

int main(){
	int outer;
	int inner;

	for (outer = 1; outer <= 3; outer++)
	{
		for (inner = 1; inner <= 5; inner++)
		{
			printf("%d ", inner);
		}
		// Print a new line when each inner loop finishes
		printf("\n");
	}
	return 0;
}

/*
If you put a for loop in the body of another loop, you are nesting the loops. In effect, the inner loop executes as many times as the outer loop dictates. You might need a nested for loop if you wanted to print three lists of your top five customers. The outer loop would move from 1 to 3, while the inner loop would print the top five customers. 
*/