#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 * dlistint_t linked list.
 * @head: double pointer to dlistint_t's head
 * @index: index of pointer to delete
 * Return: 1 if it success, -1 if it fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int counter;

	if (!*head)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		if (tmp->next)
			(*head)->next->prev = NULL;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	counter = 0;
	while (tmp)
	{
		if (index == counter)
		{
			if (tmp->next)
				tmp->next->prev = tmp->prev;
			tmp->prev->next = tmp->next;
			free(tmp);
			return (1);
		}
		counter++;
		tmp = tmp->next;
	}
	return (-1);
}
