#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a idx position.
 * @h: double pointer to dlistint_t liked list's head
 * @idx: index to add new node
 * @n: value for the new node
 * Return: pointer to the new node if success, NULL if fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new;
	unsigned int counter;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!*h && idx == 0)
	{
	}
	counter = 0;
	tmp = *h;
	while (tmp)
	{
		if (idx == 0)
		{
			new->prev = NULL;
			new->next = *h;
			*h = new;
			return (new);
		}
		if ((idx - 1) == counter)
		{
			new->next = tmp->next;
			new->prev = tmp;
			tmp->next = new;
			if (new->next)
				(new->next)->prev = new;
			return (new);
		}
		counter++;
		tmp = tmp->next;
	}
	return (NULL);
}
