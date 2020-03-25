#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at an idx position
 * @head: double pointer to a listint_t list
 * @idx: position to insert the new node
 * @n: value to list attribute
 * Return: pointer to new node if success, NULL if fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int len = 0, counter = 0; /**len includes NULL */
	listint_t *new_node, *tmp = *head;

	if (!head)
		return (0);
	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}
	if (idx > len)
		return (NULL);
	tmp = *head;
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		while (tmp)
		{
			if (counter == idx - 1)
			{
				new_node->next = tmp->next;
				tmp->next = new_node;
			}
			counter++;
			tmp = tmp->next;
		}
	}
	return (new_node);
}
