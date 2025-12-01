#include <stdio.h>

/*
Some of the most common types of C variables:
1. char - holds character data such as 'X' and '^'.

2. int - holds integer data such as 1, -32 and 435125. Stores data between -2,147,483,648 and 2,147,483,647.

3. float - holds floating-point data such as 25.6, -145.23 and .000005.

4. double - holds extremely large or extremely small floating-point values.
*/

/*
In some older C compilers, int could hold only values between 32767 and - 32768. If you wanted to use a larger integer, you needed to use the long int type. In most modern compilers, though, an int type can hold the same as a long int type
*/

/*
You might notice that there are no string variables, although there are character string literals. C is one of the few programming languages that has no string variables.
*/

/*
A variable can have from 1 to 31 characters in its name. Some compilers do allow longer names, but it’s better to stick with this limit, both for portability of code and to keep typing errors to a minimum. (After all, the longer the name you use, the greater the chance for a typo!) Your program’s variables must begin with a letter of the alphabet, but after that letter, variable names can have other letters, numbers, or an underscore in any combination. All of the following are valid variable names:

1. myData  
2. pay94          
3. age_limit      
4. amount            
5. QtlyIncome
*/

/*
C lets you begin a variable name with an underscore, but you shouldn’t do so. Some of C’s built-in variables begin with an underscore, so there’s a chance you’ll overlap one of those if you name your variables starting with underscores. Take the safe route and always start your variable names with letters
*/

/*
The following examples of variable names are not valid:
1. 94Pay                
2. my Age          
3. lastname,firstname

You ought to be able to figure out why these variable names are not valid: The first one, 94Pay, begins with a number; the second variable name, my Age, contains a space; and the third variable name, lastname, firstname, contains a special character (,).
*/

/*
Don’t name a variable with the same name as a function or a command. If you give a variable the same name as a command, your program won’t run; if you give a variable the same name as a function, you can’t use that same function name later in your program without causing an error.
*/

int main () 
{


	return 0;
}