#include <stdio.h>
#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: the string to search in
 * @accept: the substring to search for
 * Return: number of bytes in s exists in accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (!accept[j])
			break;
	}
	return (i);
}

