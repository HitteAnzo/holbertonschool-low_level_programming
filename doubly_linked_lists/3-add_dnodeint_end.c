#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node (newn) at the end of a list.M
 * @head: pointer to the head of the list.L
 * @n: integer for the new node (newn).P
 * Return: address of the new element, NULL if fail.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *lastn, *newn;

	lastn = *head;

	if (head == NULL)
		return (NULL);

	while (lastn != NULL && lastn->next != NULL)
		lastn = lastn->next;

	newn = malloc(sizeof(dlistint_t));

	if (newn == NULL)
		return (NULL);

	newn->n = n;
	newn->prev = lastn;
	newn->next = NULL;

	if (lastn != NULL)
		lastn->next = newn;

	if (*head == NULL)
		*head = newn;

	return (newn);
}
