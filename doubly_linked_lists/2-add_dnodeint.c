#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning of the list.MLP.
 * @head: head of the BDL
 * @n: integer for the new node.
 * Return: address of the new element, NULL if failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newn;

	newn = malloc(sizeof(dlistint_t));
	if (newn == NULL)
		return (NULL);

	newn->n = n;
	newn->prev = NULL;
	newn->next = *head;

	if (*head != NULL)
		(*head)->prev = newn;

	*head = newn;

	return (newn);
}
