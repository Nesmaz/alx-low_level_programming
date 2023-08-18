#include <stdio.h>
#include "main.h"

/**
 * main - printing numbers from 0 to 100
 * fizz instead of 3 and multiplies of 3
 * buzz instead of 5 and multiplies of 5
 * fizz buzz instead of multiplies of 3 and 5
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; ++num)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);

		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
