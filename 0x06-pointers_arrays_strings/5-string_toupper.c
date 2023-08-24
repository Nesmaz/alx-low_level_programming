#include <stdio.h>
#include "main.h"

/**
 * *string_toupper - converts lowercase characters to uppercase
 *@s: the string to be converted
 *Return: converted string
*/

char *string_toupper(char *s)
{

	int i, j, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	for (j = 0; j < len; j++)
	{
		if (s[j] >= 'a' && s[j] <= 'z')
		{
		s[j] = s[j] - 'a' + 'A';
		}

	}

	return (s);

}
