#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: double pointer to a listint_t list
 * @n: number to asign
 * Return: pointer to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end, *aux;

	aux = *head;
	new_end = malloc(sizeof(listint_t));
	if (!new_end)
		return (NULL);
	new_end->n = n;
	new_end->next = NULL;
	if (*head)
	{
		while (aux->next)
		{
			aux = aux->next;
		}
		aux->next = new_end;
	}
	else
		*head = new_end;
	return (new_end);
}
