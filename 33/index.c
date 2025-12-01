/*
A for loop offers more control than while and do-while. With a for loop, you can specify exactly how many times you want to loop; with while loops, you must continue looping as long as a condition is true. 
*/

#include <stdio.h>

int main(){
	int ctr = 1;
	while (ctr <= 5)
	{
		printf("Counter is at %d.\n", ctr);
		ctr++;
	} 
	return 0;
}

//the do-while test always resides at the bottom of the loop.