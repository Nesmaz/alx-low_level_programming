#include "main.h"
/**
 * _islower - checks for lowercase character.
 * @c: checks the passed argument
 * Return: returns 1 if character is lowercase
 *  otherwise returns 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
		return (0);
}
