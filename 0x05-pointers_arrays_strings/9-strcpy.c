#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 *		including the terminating null byte
 *		to the buffer pointed to by dest
 * @dest: the destenation of the copied string
 * @src: a pointer to the string to be copied
 * Return: a char pointer (dest) success
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
