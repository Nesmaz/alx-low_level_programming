#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to newly created array or NULL
*/

int *array_range(int min, int max)
{
	int i, len;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}

	len = max - min + 1;
	arr = malloc(len * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
