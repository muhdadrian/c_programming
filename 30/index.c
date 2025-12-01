/*
Sizing Up the Situation

You use sizeof() to find the number of memory locations it takes to store values of any data type. Although most C compilers now use 4 bytes to store integers, not all do. To find out for sure exactly how much memory integers and floating points are using, you can use sizeof():

i = sizeof(int); // Puts the size of integers into i.
f = sizeof(float); // Puts the size of floats into f

sizeof() works on vars and as well as data types. If you need to know how much memory vars and arrays take, you can apply the sizeof() operator to them. 
 */

#include <stdio.h>

int main()
{
	char name[] = "Ruth Claire";
	int i = 7;
	printf("The size of i is %zu.\n", sizeof(i));
	printf("The size of name is %zu.\n", sizeof(name));//the character array size is 12, which includes the null zero.

	return 0;
}

// The length of a string and the size of a string are two different values. The length is the number of bytes up to but not including the null zero, and it is found via strlen(). The size of a string is the number of characters it takes to hold the string, including the null zero.