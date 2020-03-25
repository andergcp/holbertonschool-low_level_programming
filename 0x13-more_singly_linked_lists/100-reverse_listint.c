#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list 
 * @head: double pointer to a listint_t
 * Return: pointer to the new head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
