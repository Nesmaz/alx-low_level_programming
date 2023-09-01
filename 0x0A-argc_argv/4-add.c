#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: the count of environment arguments
 * @argv: pointer to the arguments array of strings
 * Return: 0 if no number is passed, 1 if contains a symbol
*/
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
