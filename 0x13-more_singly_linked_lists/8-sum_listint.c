#include "lists.h"

/**
 * sum_listint - sums of all data of a listint_t
 * @head: pointer to a listint_t
 * Return: sum of data in listint_t
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
