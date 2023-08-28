#include <stdio.h>
#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: the string to search in
 * @c: the char to locate in the string
 * Return: a pointer to the first occurance of c or NULL
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
