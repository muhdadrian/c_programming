/*
Although the conditional operator works on three args, the increment and decrement operators work on only one. The increment operator adds 1 to a var, and the decrement operator subtracts 1 from a var.
*/

/*
the increment operator is ++

the decrement operator is --
*/

/*
If you want to add 1 to the var count, here's how you do it:

count++;

you also can do this:

++count;
*/

/*
The decrement operator does the same thing, except that the 1 is substracted from the var. You can do this:

count--;

You can also do this:

--count;
 */

/*
The operators can go on either side of the var. If the operator is on the left, it's called a prefix increment or prefix decrement operator. If the operator is on the right, it's known as a postfix increment or postfix decrement operator.
*/

/*
int i = 2, j = 5, n;
n = ++i * j;

if i increments before the multiplication, n becomes 15, but if i increments after the multiplication , n becomes 10.

the answer lies in the prefix and postfix placements. If the ++ or -- is a prefix, C computes it before anything else on the line. If the ++ or -- is a postfix, C computes it after everything else on the line finishes.

Because the ++ in the preceding code is prefix, i increments to 3 before being multiplied by j. The following statement increments i after multiplying i by j and storing the answer in n:

n = i++ * j; (Puts 10 in n and 3 in i)
*/

/*
Being able to increment a var in the same expression as you use the var means less work on the programmer's part. The preceeding statement replaces the following two statements that you would have to write in other programming languages:

n = i * j;
i = i + j;
 */

/*
The ++ and -- operators are extremely efficient. If you care about such things (most of us don't), ++ and -- compile into only one machine language statement, whereas adding or substracting 1 using +1 ot -1 doesn't always compile so efficiently.
 */
