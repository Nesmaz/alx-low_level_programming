#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the linked list
 * Return: the number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	unsigned int nodes = 0;

	if (head == NULL)
		exit(98);

	slow = head;
	fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			const listint_t *tmp = head;

			while (tmp != slow)
			{
				printf("[%p] %d\n", (void *)tmp, tmp->n);
				nodes++;
				tmp = tmp->next;
			}
			printf("[%p] %d\n", (void *)slow, slow->n);
			printf("[%p] %d\n", (void *)slow, slow->n - 1);
			printf("-> [%p] %d\n", (void *)slow, head->n);
			return (nodes);
		}
	}

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		nodes++;
		head = head->next;
	}
	return (nodes);
}
