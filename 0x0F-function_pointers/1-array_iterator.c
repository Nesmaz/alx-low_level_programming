#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
* array_iterator - executes a function given as parameter on elements in array
* @array: pointer to the array to be printed out
* @size: the size of the array
* @action: a function pointer will point to one of the printing functions
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
