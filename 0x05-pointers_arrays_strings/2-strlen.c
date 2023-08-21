#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: a pointer to a string to know its length
 * Return: returns the length of the string
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
