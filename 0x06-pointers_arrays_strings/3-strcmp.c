#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: int
*/

int _strcmp(char *s1, char *s2)
{
	int i;
	
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)

	{
		if (s1[i] > s2[i])
			return (15);
		else if (s2[i] > s1[i])
			return (-15);
	}
		return (0);
}
