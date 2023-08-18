#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - printing numbers from 0 to 100
 * fizz instead of 3 and multiplies of 3
 * buzz instead of 5 and multiplies of 5
 * fizz buzz instead of multiplies of 3 and 5
*/

void fizz_buzz(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{

			char fizz[] = "Fizz";
			int i;

			for (i = 0; fizz[i] != '\0'; i++)
			{
				_putchar(fizz[i]);
			}
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{

			char buzz[] = "Buzz";
			int i;

			for (i = 0; buzz[i] != '\0'; i++)
			{
				_putchar(buzz[i]);
			}
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{

			char fb[] = "Fizz Buzz";
			int i;

			for (i = 0; fb[i] != '\0'; i++)
			{
				_putchar(fb[i]);
			}
		}
		else if (i % 3 != 0 && i % 5 != 0)
		{
			if (i < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(i + '0');
			}
			else if (i < 100)
			{
				_putchar(' ');
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(i / 100 + '0');
				_putchar((i / 10) % 10 + '0');
				_putchar(i % 10 + '0');
			}
		}
		_putchar('\n');

	}
}
