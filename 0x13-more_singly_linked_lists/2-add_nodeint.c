#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: double pointer to a listint_t type
 * @n: number to asign
 * Return: pointer to list head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->next = *head;
	new->n = n;
	*head = new;
	return (*head);
}
