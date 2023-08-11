#include <stdio.h>

/**
 * main - Entry point
 * Description : print the alphabet in lowercase with putchar function
 * Return: 0 (success)
 */

int main(void)
{
	char ch = 97;

	while (ch <= 122)
	{
		putchar(ch++);
	}
	putchar('\n');

	return (0);
}

