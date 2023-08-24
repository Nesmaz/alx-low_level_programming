#include <stdio.h>
#include "main.h"

/**
 * *cap_string - capitalize all words of a string
 * @s: the string to be capitalized
 * Return: the converted string
*/

char *cap_string(char *s)
{
	int i;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 'a' + 'A';
	}
	for (i = 1; s[i] != '\0'; i++)
	{
		if (s[i - 1] >= '0' && s[i - 1] <= '9')
		{
			continue;
		}
		if (!((s[i - 1] >= 'A' && s[i - 1] <= 'Z') ||
			(s[i - 1] >= 'a' && s[i - 1] <= 'z')) &&
			(s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = s[i] - 'a' + 'A';
		}
	}
	return (s);
}

