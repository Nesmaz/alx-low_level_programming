#include "main.h"
#include <stdio.h>

/**
 *  _sqrt_helper - helper function to find the natural square root of a number
 * @n: The number to find the square root of
 * @i: The current iteration of the recursive function
 * Return: The natural square root of n,
 *	or -1 if n does not have a natural square root
*/

int _sqrt_helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(n, i + 1));
	}
}

/**
 *  _sqrt_recursion - returns the natural square root of a number
 * @n: The number to find the square root of
 * Return: The natural square root of n, or -1
 *	if n does not have a natural square root
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(n, 0));
	}
}
