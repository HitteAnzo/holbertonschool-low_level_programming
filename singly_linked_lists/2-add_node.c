#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of list_t list. MLP
 * @head: a pointer to the head of list_t list.
 * @str: the string to be added to list_t list.
 * Return: NULL if fail, the address of the new node (newn) if success.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	dup = strdup(str);
	if (!dup)
	{
		free(new_node);
		return (NULL);
	}

	len = strlen(new_node);

	new_node->str = dup;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
