#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
void print_opcodes(void *func, size_t size);

/**
 * print_opcodes - prints opcodes of its own main function
 * @func: pointer to the function whose opcodes are to be printed
 * @size: number of bytes from the start of the function to print opcodes for
*/

void print_opcodes(void *func, size_t size)
{
	unsigned char *opcode = (unsigned char *)func;
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("%02x ", opcode[i]);
	}
	printf("\n");

}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: The command-line arguments
 * Return: 0 if successful, error atatus otherwise
*/

int main(int argc, char *argv[])
{
	int bts;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bts = atoi(argv[1]);
	if (bts < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes((void *)main, bts);

	return (0);
}
