#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: pointer to head
 * Return: qty of nodes
 */
void free_list(list_t *head)
{
	list_t *i;

	while (head)
	{
		i = head;
		head = head->next;
		free(i->str);
		free(i);
	}
}
