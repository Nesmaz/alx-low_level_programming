#include <stdio.h>
/**
 * main - Entry point
 * Description : print combinations of a digit with putchar function
 * Return: 0 if successful, non-zero otherwise
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
