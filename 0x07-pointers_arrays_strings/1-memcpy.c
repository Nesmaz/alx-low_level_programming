#include <stdio.h>
#include "main.h"

/**
 * *_memcpy - fills memory with a constant byte
 * @dest: the destination of the copied string
 * @src: the string to copy from
 * @n: number of bytes to be copied
 * Return: a pointer to the memory area s
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	const char *s = src;

	while (n-- > 0)
	{
		*d++ = *s++;
	}
	return (dest);
}
