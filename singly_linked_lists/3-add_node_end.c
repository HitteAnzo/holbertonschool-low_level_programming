#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - add a new node at the end of the list_t .MLP.
 * @head: pointer to the beginning of the list.
 * @str: string to be duplicated.
 * Return: NULL if fail, address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newn, *cur;
	int len = 0;

	newn = malloc(sizeof(list_t));
	if (newn == NULL)
		return (NULL);

	newn->str = strdup(str);
	if (newn->str == NULL)
	{
		free(newn);
		return (NULL);
	}

	while (str[len] != '\0')
		len++;
	newn->len = len;
	newn->next = NULL;

	if (*head == NULL)
		*head = newn;
	else
	{
		cur = *head;
		while (cur->next != NULL)
			cur = cur->next;
		cur->next = newn;
	}
	return (newn);

}
