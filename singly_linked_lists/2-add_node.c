#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of list_t list
 * @head: a pointer to the head of list_t list
 * @str: the string to be added to list_t list
 * Return: NULL if fail, the address of the new node if success
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *newn;

	newn = malloc(sizeof(list_t));
	if (newn == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(newn);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	newn->str = dup;
	newn->len = len;
	newn->next = *head;
	*head = newn;

	return (newn);
}
