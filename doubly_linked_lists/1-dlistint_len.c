#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - lists the number of elements in a list.MLP.
 * @h: head of the list.
 * Return: number of node.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		node++;
		h = h->next;
	}
	return (node);
}
