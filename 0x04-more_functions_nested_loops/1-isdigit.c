#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checking if the value of a variable is numeric
 * @c: passed argument to be checked if it's a digit
 * Return: (1) if it's a digit & (0) otherwise
 */

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
