/* The first C program */

/*
 * A C program, whatever its size, consists of functions and variables.
 * A function contains statements that specify the computing operations to be done, and variables store values used during the computation.
 * Every C program must have a function named 'main'.
 * A C program begins its execution from beginning of main function.
*/

/* include information about standard library */
#include <stdio.h>

/* define a function named main
 * that receives no arguement values */
main()
/* statements of main are enclosed in braces */
{
	/* main calls library function printf
	 * to print this sequence of characters;
	 * \n represents the newline character */
	printf("hello, world\n");
}
