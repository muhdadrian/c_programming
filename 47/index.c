// you can also request the two initials by requiring the Enter keypresses after the user enters the two initials, like this:

	//printf("What are your two initials?\n");
	//firstInit = getchar();
	//lastInit = getchar();
	//getchar(); 

// if user types GP and then presses Enter, the G resides in the firstInit var and the P resides in the lastInit var.

// A Little Faster: getch()
/*
- a char input function named getch() helps eliminate the leftover Enter keypresses that getchar() leaves.
- getch() is unbuffered -- that is, getch() gets whatever keypresses the user types immediately and doesn't wait for an Enter keypress.
- the drawback to getch() is that the user can't press the Backspace key to correct bad input.
- for example, with getchar(), a user could press Backspace if he or she typed a B instead of a D.
- the B would be taken off the buffer by the Backspace, and the D would be left for getchar() to get after the user pressed Enter.
- because getch() does not buffer input, there is no chance of the user pressing Backspace. 
*/

// The following code gets two chars without an Enter keypress following each one:

	// printf("What are your two initials?\n");
	// firstInit = getch();
	// lastInit = getch();

// getch() is a little faster than getchar() because it doesn't wait for an Enter keypress before grabbing the user's keystrokes and continuing. 
// therefore, you don't need a standalone getch() to get rid of the \n as you do with getchar() 

// Warning:
/*
- getch() does not echo the input chars to the screen as getchar() does.
- therefore, you must follow getch() with a mirror-image putch() if you want the user to see onscreen the char he or she typed.
to echo the initials, you could do this:
*/

	// printf("What are your two initials?\n");
	// firstInit = getch();

	// putch(firstInit);

	// lastInit = putch();

	// putch(lastInit);