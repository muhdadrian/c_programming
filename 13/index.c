/*
Including Files:

#include has two formats, which are almost identical: 

#include <filename>

and

#include "filename"
*/

// what #include does is it’s nothing more than a file merge command.

// #include inserts a disk file into the middle of another file.

/*
As a reminder, the #include file for printf() is stdio.h (which stands for standard I/O), and the #include file for the strcpy() function is string.h.
*/

// The #define preprocessor directive defines constants.

//Constants that you define with #define are not variables, even though they sometimes look like variables when they are used.

/*
Here is the format of the #define directive:
#define CONSTANT constantDefinition

Here are some sample #define directives:
   #define AGELIMIT 21
   #define MYNAME "Paula Holt"
   #define PI 3.14159
*/

/*
here’s what #define tells C: Every place in the program that the CONSTANT appears, replace it with the constantDefinition. The first #define just shown instructs C to find every occurrence of the word AGELIMIT and replace it with a 21. Therefore, if this statement appeared somewhere in the program after the #define:

if (employeeAge < AGELIMIT)

the compiler acts as if you typed this:

if (employeeAge < 21)

even though you didn’t.
*/

/*
Use uppercase letters for the defined constant name. This is the one exception in C when uppercase is not only used, but recommended. Because defined constants are not variables, the uppercase lets you glance through a program and tell at a glance what is a variable and what is a constant.
*/

#include <stdio.h>
#include <string.h>
#include "family.h"

int main () 
{
	int age;
	char childname[14] = "Sarah";

	printf("\n%s have %d kids.\n", FAMILY, KIDS);

	age = 7;
	printf("The oldest, %s, is %d.\n", childname, age);

	strcpy(childname, "Fatih");
	age = 5;
	printf("The middle boy, %s, is %d.\n", childname, age);

	age = 2;
	strcpy(childname, "Fariq");
	printf("The youngest, %s, is %d.\n", childname, age);

	return 0;
}

// You might notice that one of the #define constants created in the header file, MORTGAGE_RATE, is not used in this sample program. You do not have to use every created constant if you include a header file in your program.

//The program uses one variable, childname, for the name and one variable, age, for the age of three different children, with the information overwritten in each case. This is not the wisest choice— after all, there’s a good chance that if you write a program that needs the names of your kids, you’ll probably be using each name more than once. But in a program like this, it’s a good reminder that you can overwrite and change variable names, but not constants created with a #define statement.