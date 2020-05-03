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
	{
		*head = new;
		new->prev = NULL;
		new->next = NULL;
	}
	else if (*head)
	{
		new->next = *head;
		new->prev = NULL;
		*head = new;
	}
	return (new);
}
