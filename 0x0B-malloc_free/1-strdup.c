#include "holberton.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: Ppinter to a char
 * Return: NULL if str is null, a pointer when successful.
 **/

char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *p;

	while (str[i])
	{
		i++;
	}
	i = i + 2;

	p = malloc(sizeof(*p) * i);

	if (p != NULL)
	{
		do {
			p[j] = str[j];
			j++;
		} while (str[j]);
		return (p);
	}
	else
		return (NULL);
}
