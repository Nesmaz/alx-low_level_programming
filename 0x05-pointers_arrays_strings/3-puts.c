#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: a pointer to a string to be printed
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
