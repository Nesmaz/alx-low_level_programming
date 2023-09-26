#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the head of the list
 * Return: the head node's data
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);

	tmp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(tmp);

	return (n);
}
