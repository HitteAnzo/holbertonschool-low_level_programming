#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node (newn) in a list.M.
 * @h: pointer to the beginning of the list.L.
 * @idx: position to insert the new node.P.
 * @n: integer for the new node.
 * Return: address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *newn;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	newn = malloc(sizeof(dlistint_t));
	if (newn == NULL)
		return (NULL);

	newn->n = n;
	newn->prev = temp;
	newn->next = temp->next;
	temp->next->prev = newn;
	temp->next = newn;

	return (newn);
}
