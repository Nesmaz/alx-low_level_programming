#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: a pointer to the name string to be printed
 * @f: a function pointer pointing to one of the printing functions
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
