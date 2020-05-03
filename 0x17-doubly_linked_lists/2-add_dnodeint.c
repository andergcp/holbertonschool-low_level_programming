#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to the double linked list
 * @n: Value for n in the new node
 * Return: pointer to the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!*head)
		new->next = NULL;
	else if (*head)
	{
		new->next = *head;
		(*head)->prev = new;
	}
	new->prev = NULL;
	*head = new;
	return (new);
}
