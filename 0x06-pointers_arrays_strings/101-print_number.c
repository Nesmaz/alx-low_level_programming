#include <stdio.h>
#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to be printed
*/

void print_number(int n)
{
	int ne = n;

	if (n < 0)
	{
		_putchar('-');
		ne = -n;
	}
	if (ne / 10 != 0)
	{
		print_number(ne / 10);
	}
	_putchar((ne % 10) + '0');
}
