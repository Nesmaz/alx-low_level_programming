#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: a pointer to a string to be reversed
*/

void print_rev(char *s)
{
	int i;
	int len = 0;
	char *p = s;

	while (*p != '\0')
	{
		len++;
		p++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
