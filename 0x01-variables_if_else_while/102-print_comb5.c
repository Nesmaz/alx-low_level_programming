#include<stdio.h>

/**
 * main - Entry Point
 * Description: prite a program that prints all possible
 * different combinations of two digits
 * Return: 0 success
 */

int main(void)
{
	int first, second;

	while (first <= 99)
	{
		second = first;
		while (second <= 99)
		{
			if (second != first)
			{
				putchar((first / 10) + 48);
				putchar((first % 10) + 48);
				putchar(' ');
				putchar((second / 10) + 48);
				putchar((second % 10) + 48);

				if (first != 98 || second != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++second;
		}
		++first;
	}
	putchar('\n');

	return (0);
}
