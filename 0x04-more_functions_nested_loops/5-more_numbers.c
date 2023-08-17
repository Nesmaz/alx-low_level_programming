#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *		using _putchar function and nested for loops
*/

void more_numbers(void)
{
	int row, col, num;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 14; col++)
		{
			num = col;

			if (col > 9)
			{
				_putchar(1 + '0');
				num = col % 10;
			}

			_putchar(num + '0');
		}
			_putchar('\n');

	}

}
