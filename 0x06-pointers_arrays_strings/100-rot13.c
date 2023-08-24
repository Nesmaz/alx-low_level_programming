#include <stdio.h>
#include "main.h"

/**
 * *rot13 - encodes using rot13
 * @s: passed string to be encoded
 * Return: encoded string
*/

char *rot13(char *s)
{
	char org[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char rot[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; rot[j] != '\0'; j++)
		{
			if (s[i] == org[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}
	return (s);
}
