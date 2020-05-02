#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: Pointer to the double linked list's head
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t cty = 0;

	if (!h)
		return (0);

	while (h->next)
	{
		printf("%d\n", h->n);
		cty++;
		h = h->next;
	}
	printf("%d\n", h->n);
	cty++;
	return (cty);
}
