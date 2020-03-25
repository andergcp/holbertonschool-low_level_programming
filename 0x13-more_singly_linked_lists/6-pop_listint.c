#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to a listint_t list
 * Return: the data of the head node deleted
 */

int pop_listint(listint_t **head)
{
	int m;
	listint_t *temp;

	if (!*head)
		return (0);
	temp = *head;
	*head = (*head)->next;
	m = temp->n;
	free(temp);
	return (m);
}

