#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every other character of a string
 *		starting with first character
 * @str: a pointer to a string to be printed
*/

void puts2(char *str)

{
	int i;
	int len = 0;
	char *st = str;

	while (*st != '\0')
	{
		len++;
		st++;
	}
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

