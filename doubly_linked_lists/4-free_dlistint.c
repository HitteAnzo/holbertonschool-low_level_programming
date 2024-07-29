#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free dlistint_t list. MLP
 * @head: beginning of the list.
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		dlistint_t *temp = head->next;

		free(head);
		head = temp;
	}
}
