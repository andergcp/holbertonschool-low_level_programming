#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to head
 * @str: pointer to copy
 * Return: number of nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p = malloc(sizeof(list_t)), *tmp = *head;
	int i;

	if (p)
	{
		while (str[i])
			i++;
		p->str = strdup(str);
		p->len = i;
		p->next = NULL;
		if (*head)
		{
			while (tmp->next)
				tmp = tmp->next;
			tmp->next = p;
		}
		else
			*head = p;
		return (p);
	}
	return (NULL);
}
