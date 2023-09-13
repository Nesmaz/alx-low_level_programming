#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * int_index - searches for an integer
 * @array: pointer to the array to be searched
 * @size: the number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: index of the first match or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
		{
			return (-1);
		}

		for (i = 0; i < size; i++)
		{

			if (cmp(array[i]))
			{
				return (i);
			}

		}
	}
	return (-1);
}
