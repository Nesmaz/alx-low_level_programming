#include "main.h"
/**
 * print_sign - checks if integer is positive, negative or 0
 * @n: checks the passed argument
 * Return: returns 1 if number is positive,
 * 0 if number is 0,
 * -1 if number is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

	return (0);

}
