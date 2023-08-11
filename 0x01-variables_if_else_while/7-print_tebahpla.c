#include <stdio.h>
/**
 * main - Entry point
 * Description : print alphabet reversed with putchar function
 * Return: 0 if successful, non-zero otherwise
 */
int main(void)
{
	char ze = 'z';

	while (ze >= 'a')
	putchar(ze--);

	putchar('\n');
	return (0);
}
