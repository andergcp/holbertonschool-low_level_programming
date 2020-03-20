#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to head
 * @str: pointer to strcopy
 * Return: If success number of nodes - else NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *p = malloc(sizeof(list_t));
	int i;

	if (p)
	{
		while (str[i])
			i++;
		p->str = strdup(str);
		p->len = i;
		p->next = *head;
		*head = p;
		return (p);
	}
	return (NULL);
}
