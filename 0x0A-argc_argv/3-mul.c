#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - entry point
 * @argc: the count of environment arguments
 * @argv: pointer to the arguments array of strings
 * Return: 0 indecates success
*/
int main(int argc, char *argv[])
{

	if (argc == 3)
	{
		int arg1 = atoi(argv[1]);
		int arg2 = atoi(argv[2]);

		printf("%d\n", arg1 * arg2);
	}

	else
	{
		printf("Error\n");
	}

	return (0);
}
