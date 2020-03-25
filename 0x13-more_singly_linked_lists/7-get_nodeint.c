#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to a listint_t list
 * @index: number of index to return
 * Return: pointer to the index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;

	while (head)
	{
		if (c == index)
			return (head);
		head = head->next;
		c++;
	}
	return (NULL);
}
