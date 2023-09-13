#include <stdio.h>
#include <stddef.h>
#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first integer
 * @b:second integer
 * Return: the result of the addition
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract two integers
 * @a: first integer
 * @b:second integer
 * Return: the result of the subtraction
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply two integers
 * @a: first integer
 * @b:second integer
 * Return: the result of multiplication
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - adds two integers
 * @a: first integer
 * @b:second integer
 * Return: the result of the division
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - adds two integers
 * @a: first integer
 * @b:second integer
 * Return: the result of the using %
*/
int op_mod(int a, int b)
{
	return (a % b);
}
