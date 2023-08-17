#include <stdio.h>
#include "main.h"
/**
 * _isupper - checks if a character is uppercase
 * @c: passed character to determine its case
 * Return: (1) is uppercase otherwise 0
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
