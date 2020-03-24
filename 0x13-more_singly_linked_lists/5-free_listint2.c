#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer to a listint_t list
 */

void free_listint2(listint_t **head)
{
	listint_t *aux = *head;

	if (!aux || !*(head))
		return;
	free_listint2(&(aux->next));
	free(aux);
	*head = NULL;
}
