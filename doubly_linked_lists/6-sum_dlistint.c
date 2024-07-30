#include "lists.h"

/**
 * sum_dlistint - sum all data (n) of a list.
 * @head: beginning of the list.
 * Return: 0 if empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
