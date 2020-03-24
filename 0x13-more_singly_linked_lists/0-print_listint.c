#include "lists.h"

/**
 * print_listint - prints all elements of list h
 * @h: pointer to a listint_t type
 * Return: number of nodes in h
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
