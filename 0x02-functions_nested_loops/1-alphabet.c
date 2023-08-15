#include "main.h"
/**
 *  print_alphabet -  prints alphabet from a to z
 *  with _putchar function
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	_putchar(ch);
	}
	_putchar('\n');
}
