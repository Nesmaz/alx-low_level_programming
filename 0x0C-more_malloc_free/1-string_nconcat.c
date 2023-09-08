#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * @n: number of bytes of s2 to be concatenated
 * Return: pointer to newly allocated space in memory
 *	containing a concatenated string or NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *cat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;

	cat = malloc((len1 + n + 1) * sizeof(char));
	if (cat == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		cat[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		cat[i] = s2[j];
	cat[i] = '\0';

	return (cat);

}
