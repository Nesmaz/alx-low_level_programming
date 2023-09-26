#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t linked list and sets head to NULL
 * @head: double pointer to the head of the list
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp, *cur;

	if (head != NULL)
	{
		cur = *head;

		while ((tmp = cur) != NULL)
		{
			cur = cur->next;
			free(tmp);
		}
		*head = NULL;
	}
}
