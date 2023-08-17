#include <stdio.h>
#include "main.h"

/**
 * print_2digits - prints numbers greater than 9
 * Description: a function that prints a number of 2 digits
 * @num: number greater than 9 to be printed
*/

void print_2digits(int num)
{
	int tens = num / 10;
	int ones = num % 10;

	_putchar(tens + '0');
	_putchar(ones + '0');
}
/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *		using _putchar and print_2digits functions
*/

void more_numbers(void)
{
	int row, col;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 14; col++)
		{
			if (col <= 9)
			{
				_putchar(col + '0');
			}
			else
			{
				print_2digits(col);
			}

		}
			_putchar('\n');

	}

}
