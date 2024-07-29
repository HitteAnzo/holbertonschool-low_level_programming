#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free list_t
 * @head: pointer to the beginning of the list
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *temp = head->next;

		free(head->str);
		free(head);
		head = temp;
	}
}
