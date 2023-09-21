#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>
#include "lists.h"

/**
 * exe_first - prints a string before main function execution
 *
 * This function is marked with the 'constructor' attribute
 *	which tells the GCC compiler to execute this function
 *	before main function
*/

void __attribute__((constructor)) exe_first(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
