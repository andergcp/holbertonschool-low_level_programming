#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list
 * @head: double pointer to a listint_t list
 * @index: position to delete
 * Return: 1 if success -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0, len = 0;
	listint_t *tmp = *head, *tmp2;

	if (!head || !(*head))
		return (-1);
	while (tmp)
	{
		len++;
		tmp = tmp->next;
	}
	if (index >= len)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (tmp)
	{
		if (i == index - 1)
		{
			tmp2 = tmp->next;
			tmp->next = (tmp->next)->next;
			free(tmp2);
			return (1);
		}
		tmp = tmp->next;
		i++;
	}
	return (-1);
}
