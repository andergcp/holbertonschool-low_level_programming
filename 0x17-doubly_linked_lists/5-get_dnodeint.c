#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to double linked list's head
 * @index: node index to return
 * Return: pointer to the nth index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *tmp;

	tmp = head;
	while (tmp)
	{
		if (counter == index)
			return (tmp);
		tmp = tmp->next;
		counter++;
	}
	return (NULL);
}
