#include <stdio.h>
#include "main.h"

/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not
 * @s: the string to be checked
 * Return: 1 if the string is palindrome0 otherwise 0
*/


int is_palindrome(char *s)
{
	int result;
	int len = 0;

	if (*s == '\0' || *(s + 1) == '\0')
	{
	return (1);
	}

	while (*(s + len) != '\0')
	{
		len++;
	}

	if (*s != *(s + len - 1))
	{
		return (0);
	}

	*(s + len - 1) = '\0';

	result = is_palindrome(s + 1);

	*(s + len - 1) = *(s + len);
	return (result);
}

