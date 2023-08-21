#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first param pointer to be swapped
 * @b: second param pointer to be swapped
*/

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
