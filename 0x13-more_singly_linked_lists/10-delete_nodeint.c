#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list
 * @head: double pointer to the head of the list
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	tmp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		return (1);
	}
	for (i = 0; i < index && tmp != NULL; i++)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	if (tmp == NULL)
		return (-1);
	prev->next = tmp->next;
	free(tmp);

	return (1);
}
