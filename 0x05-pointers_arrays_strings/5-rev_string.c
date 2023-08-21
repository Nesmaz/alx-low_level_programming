#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: a pointer to a string to be reversed
*/

void rev_string(char *s)
{
	int i;
	int len = 0;
	char *p = s;

	while (*p != '\0')
	{
		len++;
		p++;
	}
	for (i = 0; i < len / 2; i++)
	{
		char temp = s[i];

		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
