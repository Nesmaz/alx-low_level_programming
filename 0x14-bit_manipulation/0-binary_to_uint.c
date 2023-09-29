#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, p, result;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (p = 1, result = 0; i > 0; i--, p *= 2)
	{
		if (b[i - 1] == '1')
			result += p;
	}
	return (result);
}
