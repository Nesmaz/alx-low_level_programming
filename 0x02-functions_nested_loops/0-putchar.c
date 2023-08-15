#include "main.h"
/**
 * main - Entry point
 * Description : prints _putchar with _putchar function prototype
 * Return: 0 if successful, non-zero otherwise
 */

int main(void)
{
	char txt[] = "_putchar";
	int c;

	for (c = 0; c < 9; c++)
	{
	_putchar(txt[c]);
	}
	_putchar('\n');

	return (0);
}

