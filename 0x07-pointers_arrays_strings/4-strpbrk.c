#include <stdio.h>
#include "main.h"

/**
 * *_strpbrk - searches a string for a set of byte
 * @s: the string to be searched in
 * @accept: the string to search with
 * Return:  a pointer to the matching byte in s or NULL
*/

char *_strpbrk(char *s, char *accept)
{
	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}

	while (*s != '\0')
	{
	char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}

	return (NULL);
}
