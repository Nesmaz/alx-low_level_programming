#include <stdio.h>

/**
 * main - Entry point
 * Description : print the alphabet in lowercase & uppercase with putchar
 * Return: 0 (success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch++);
	}
	ch = 'A';
	while (ch <= 'Z')
	{
		putchar(ch++);
	}
	putchar('\n');
	return (0);
}

