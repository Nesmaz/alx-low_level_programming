#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: a pointer to a string to print its half
*/

void puts_half(char *str)
{
	int i;
	int len = 0;
	char *st = str;
	int n = 0;

	while (*st != '\0')
	{
		len++;
		st++;
	}
	n = (len % 2 == 0) ? len / 2 : (len + 1) / 2;
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
