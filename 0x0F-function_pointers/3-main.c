#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: count of passed arguments
 * @argv: array of vectors
 * Return: 0 indecates success
 */

int main(int argc, char *argv[])
{
	int a, b, result = 0;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((operation == op_div || operation == op_mod) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = operation(a, b);
	printf("%d\n", result);

	return (0);
}

