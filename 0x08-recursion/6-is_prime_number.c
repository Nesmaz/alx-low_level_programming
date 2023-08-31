#include "main.h"
#include <stdio.h>

/**
 * is_prime_helper - helper function to check if a number is prime
 *@n: the number to check for primality
 * @i: the current iteration of the recursive function
 *Return: 1 if n is prime, 0 otherwise
*/

int is_prime_helper(int n, int i)
{
	if (n <= 2)
	{
		return ((n == 2) ? 1 : 0);
	}
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}

	return (is_prime_helper(n, i + 1));

}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check for primality
 * Return: 1 if n is prime, 0 otherwise
*/

int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
