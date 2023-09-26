#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to a listint_t linked list
 * Return: count of elements in the list
*/

size_t listint_len(const listint_t *h)
{
	unsigned int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
