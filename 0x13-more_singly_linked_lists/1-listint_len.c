#include "lists.h"

/**
 * listint_len - return the number of elements of list h
 * @h: pointer to listint_t list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
