#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a given number
 * @n: the integer to count its factorial
 * Return: the factorial of passed integer
*/

int factorial(int n)
{
	int *N = &n;

	if (*N < 0)
	{
		return (-1);
	}
	else if (*N == 0)
	{
		return (1);
	}

	return (*N * factorial(*N - 1));
}
