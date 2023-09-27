#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list
 * @h: double pointer to the head of the linked list
 * Return: the size of the list that was free’d
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *slow, *fast, *tmp;
	size_t nodes = 0;

	if (h == NULL || *h == NULL)
		return (0);

	slow = *h;
	fast = *h;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			tmp = *h;
			while (tmp != slow)
			{
				tmp = tmp->next;
				free(*h);
				*h = tmp;
				nodes++;
			}
			free(*h);
			*h = NULL;
			return (nodes);
		}
	}

	while (*h)
	{
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
		nodes++;
	}
	return (nodes);
}
