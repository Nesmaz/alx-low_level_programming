#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: a pointer to the string to be converted
 * Return: integers out of a string
*/

int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
		s++;
	}
	return (num * sign);
}
