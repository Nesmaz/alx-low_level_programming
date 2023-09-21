#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>
#include "lists.h"

/**
 * list_len - returns count of list_t list elements
 * @h: pointer to the head of the list
 * Return: count of elements in list_t singly linked list
*/

size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
