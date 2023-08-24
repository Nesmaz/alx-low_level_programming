#include <stdio.h>
#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the passed string to be encoded
 * Return: the encoded string
*/

char *leet(char *str)
{
	int i, j;
	char *teel = "aAeEoOtTlL";
	char *leet = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; teel[j] != '\0'; j++)
		{
			if (str[i] == teel[j])
			{
				str[i] = leet[j];
				break;
			}
		}
	}
	return (str);
}
