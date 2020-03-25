#include "lists.h"

/**
 *
 *
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter = 0;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!head || !new_node)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		while (*head)
		{
			
		}
	}
	return (*head);
}
