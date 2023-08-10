#include <unistd.h>

/**
 * main - Entry point
 * Description: C program to print with write function
 * Return: 0 indicates success
*/

int main(void)
{
	char qu[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, qu, sizeof(qu) - 1);
		return (1);

}
