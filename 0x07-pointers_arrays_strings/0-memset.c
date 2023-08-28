#include <stdio.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: the memory area to be modefied
 * @b: the constant byte to fill the specified area
 * @n: the number of bytes to be modefied
 * Return: a pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;
	unsigned char *ss = (unsigned char *) s;

	for (i = 0; i < n; i++)
	{
		ss[i] = b;
	}

	return (s);
}
