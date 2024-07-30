#include "lists.h"
#include <stddef.h>

/**
 * get_dnodeint_at_index - gets the node of a list.
 * @head: beginning of the list.MLP.
 * @index: index of the node.
 * Return: NULL if node don't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	if (head == NULL)
		return (NULL);

	for (; index != 0 && head != NULL; index--)
		head = head->next;

	return (head);
}
