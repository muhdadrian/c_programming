//The Newline Consideration

/*
- although getchar() gets a single char, control isn't returned to your program until the user presses Enter.

- the getchar() function actually instructs C to accept input into a buffer, which is a memory area reserved for input.

- the buffer isn't released until the user presses Enter, and then the buffer's contents are released a character at a time.

- this means two things:
1. the user can press the Backspace key to correct bad char input, as long as he or she hasn't pressed Enter.
2. the Enter keypress is left on the input buffer if you don't get rid of it.
 */

// getting rid of the Enter keypress is a problem that all beginning C programmers must face.
// Several solutions exist, but none is extemely elegant. Consider the following segment of a program:

	// printf("What are your two initials?\n");
	// firstInit = getchar();
	// lastInit = getchar();

// if you type GT, you might think that the G would go in the var firstInit and T to var lastInit -- it's wrong.
// the 1st getchar() doesn't finish until the user presses Enter because the G was going to the buffer.
// only when the user presses Enter does the G leave the buffer and go to the program -- but the Enter is still on the buffer!
// the 2nd getchar() sends that Enter (actually, the \n that represents Enter) to lastInit.
// the T is still left for a subsequent getchar() -- if there's one.

/*
Tip:
One way to fix this problem is to insert an extra getchar() that captures the Enter but doesn't do anything with it.
 */  
 








 

