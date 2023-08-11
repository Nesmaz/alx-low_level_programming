#include <stdio.h>
/**
 * main - Entry point
 * Description : print numbers of base 16 with putchar function
 * Return: 0 if successful, non-zero otherwise
 */
int main(void)
{
	char x = '0';

	while (x <= '9')
	{
		putchar(x++);
	}
	x = 'a';
	while (x <= 'f')
	{
		putchar(x++);
	}
	putchar('\n');
	return (0);
}
