#include <stdio.h>
#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: the string to search in
 * @needle: the substring to be searched for
 * Return: a pointer to the beginning of substring or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	if (haystack == NULL || needle == NULL)
	{
		return (NULL);
	}

	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
