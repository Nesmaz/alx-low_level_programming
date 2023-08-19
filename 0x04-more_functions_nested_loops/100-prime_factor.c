#include<stdio.h>

/**
* _sqrt - calculate the square root
*
* @num: input number
*
* Return: square root of num
*
*/

double _sqrt(double num)
{
	float cur, pre;

	cur = num / 2;
	pre = 0;

	while (cur != pre)
	{
		pre = cur;
		cur = (num / pre + pre) / 2;
	}
	return (cur);
}

/**
* largest_prime_factor - finds and prints the largest prime factor of a number
* @num: number to find it's largest prime factor
*/

void largest_prime_factor(long int num)
{
	int pri, largest;

	while (num % 2 == 0)
	num = num / 2;

	for (pri = 3; pri <= _sqrt(num); pri += 2)
	{
		while (num % pri == 0)
		{
			num = num / pri;
			largest = pri;
		}
	}


	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
* main - Entry point
* Return: 0 (Success)
*/
int main(void)
{

	largest_prime_factor(612852475143);

	return (0);
}
