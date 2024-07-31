#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes a node from a list.
 * @head: pointer to the pointer to the beginning of a list
 * @index: index of the node to delete.
 * Return: 1 if success, -1 if fail.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	for (i = 0; i < index; i++)
	{
		if (!temp)
			return (-1);
		temp = temp->next;
	}

	if (!temp)
		return (-1);

	if (temp == *head)
	{
		*head = temp->next;
		if (*head)
			(*head)->prev = NULL;
	}
	else
	{
		temp->prev->next = temp->next;
		if (temp->next)
		temp->next->prev = temp->prev;
	}

	free(temp);
	return (1);
}
