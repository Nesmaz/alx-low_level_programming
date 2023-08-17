#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 except 2 and 4
*/

void print_most_numbers(void)
{
	int i = 0;

	do {
		if (i == 2 || i == 4)
		{
			i++;
			continue;
		}

		_putchar(i + 48);
		i++;
	} while (i < 10);

	_putchar('\n');
}
