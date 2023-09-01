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
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
