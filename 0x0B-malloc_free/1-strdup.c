#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - returns a pointer to newly allocated space in memory
 * @str: the string to be duplicated
 * Return: pointer to the duplicated string or NULL
*/

char *_strdup(char *str)
{
	int i = 0;
	int len = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	s = malloc((len + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';

	return (s);

}
