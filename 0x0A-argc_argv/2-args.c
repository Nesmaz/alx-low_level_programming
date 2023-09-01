#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: the count of environment arguments
 * @argv: pointer to the arguments array of strings
 * Return: 0 indecates success
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
