#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node - adds anew node at the beginning of a list_t list
 * @head: a pointer to the head pointer to the head of list
 * @str: the value of the list to be added as head node if list
 * Return: pointer to list
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[len])
		len++;

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);


}
