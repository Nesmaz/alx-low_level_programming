#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entery point
 * Return - integer
 */

int main(void)
{
	int total = 0;
	char random_char;

	srand(time(NULL));
	while (total <= 2645)
	{
		random_char = rand() % 128;
		total += random_char;
		putchar(random_char);
       	}
	putchar(2772 - total);
	return (0);
}
