#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list.
 * @head: pointer to double linked list's head
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;
	while (tmp)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
}
