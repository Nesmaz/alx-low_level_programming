#include <stdio.h>
#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: the string will be concatenated to
 * @src: the string to be concatenated
 * @n: passed number of characters to be concatenated
 * Return: concatenated string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
