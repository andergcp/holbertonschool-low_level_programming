#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: Pointer to the double linked list's head
 * Return: The number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t cty = 0;

	if (!h)
		return (0);

	while (h->next)
	{
		cty++;
		h = h->next;
	}
	cty++;
	return (cty);
}
