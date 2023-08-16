#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: integer passed to determine the time table
*/

void print_times_table(int n)
{
	int row, col, count;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			_putchar('0');
			for (col = 1; col <= n; col++)
			{
				_putchar(',');
				_putchar(' ');

				count = row * col;

				if (count <= 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}

				else if (count < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((count / 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar((count / 100) + '0');
					_putchar((count / 10) % 10 + '0');
				}

				_putchar((count % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
