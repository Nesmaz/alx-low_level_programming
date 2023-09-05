#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings in allocated space in memory
 * @s1: first string to be conctenated
 * @s2: second string to be concatenated
 * Return: pointer to allocated space in memory containing both strings or NULL
*/

char *str_concat(char *s1, char *s2)

	{
	int len1 = 0, len2 = 0;
	int i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	s = malloc((len1 * sizeof(char)) + ((len2 + 1) * sizeof(char)));
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return (s);
}
