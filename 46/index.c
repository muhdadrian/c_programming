// here is a workaround for the initial-getting problem:

	//printf("What are your two initals?\n");
	//firstInit = getchar();
	//n1 = getchar();
	//lastInit = getchar();
	//n1 = getchar(); 

// this code requires that the user press Enter between each initial. 
// you don't have to do anything with the n1 var because n1 exists only to hold the in-between newline.
// you don't even have to save the newline keypress in a var. The following code works just like the last:

	//printf("What are your two intials?\n");
	//firstInit = getchar();
	//getchar(); // Discards the newline
	//lastInit = getchar();
	//getchar(); // Discards the newline

// some C compilers issue warning messages when you compile programs with a standalone getchar() on lines by themselves.
// as long as you use these getchar() s for discarding Enter keypresses, you can ignore the compiler warnings.


