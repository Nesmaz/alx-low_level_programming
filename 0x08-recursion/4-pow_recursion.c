#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns the value of x raised to power of y
 * @x: the integer to be raised
 * @y: the power to be performed on x
 * Return: the value of x to the power of y
*/

int _pow_recursion(int x, int y)
{
	int *X = &x;
	int *Y = &y;

	if (*Y < 0)
	{
		return (-1);
	}
	if (*Y == 0)
	{
		return (1);
	}

	return (*X * _pow_recursion(*X, *Y - 1));
}
