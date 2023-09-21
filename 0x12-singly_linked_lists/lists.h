#ifndef LISTS_H
#define LISTS_H


/**
 * struct list_t  - A node in a singly linked list
 *	where each node contains a string and a pointer
 *	to the next node
 * @str: Pointer to a string
 * @len: length of the string
 * @next: Pointer to the next node in the list
 * This struct represents a node in a singly linked list
 * Each node contains a string and a pointer to the next node.
 */
typedef struct list_t
{
	char *str;
	unsigned int len;
	struct list_t *next;

} list_t;


int _putchar(char ch);

size_t print_list(const list_t *h);

size_t list_len(const list_t *h);

list_t *add_node(list_t **head, const char *str);

list_t *add_node_end(list_t **head, const char *str);

void free_list(list_t *head);




#endif
