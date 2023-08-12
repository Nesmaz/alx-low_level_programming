#include <stdio.h>
/**
 * main - Entry point
 * Description : print random number with printf function
 * Return: 0 if successful, non-zero otherwise
 */

int main(void)
{
		int i, j, y;

		for (i = 0; i <= 9; i++)
		{
			for (j = i + 1; j <= 9; j++)
			{
				for (y = j + 1; y <= 9; y++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(y + '0');
					if (i != 7 || j != 8 || y != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
		putchar('\n');
		return (0);
}
