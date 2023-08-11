#include <stdio.h>
/**
 * main - Entry point
 * Description : print numbers of base 10 with putchar function
 * Return: 0 if successful, non-zero otherwise
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
	putchar(i++ + '0');
	}
	putchar('\n');
	return (0);
}
