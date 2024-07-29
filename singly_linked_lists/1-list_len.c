#include "lists.h"

/**
 * list_len - function that return element number in a linked list MLP
 * @h: list_t list
 * Return: number of element (i)
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
