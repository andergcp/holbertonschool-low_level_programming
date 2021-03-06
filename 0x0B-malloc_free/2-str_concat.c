#include "holberton.h"
#include <stdlib.h>

/**
 * lenx2 - calculate the size of two strings
 * @p1: pointer to a char
 * @p2: pointer to a char
 * Return: int the size of p1 + p2
 **/
int lenx2(char *p1, char *p2)
{
	int i = 0;

	while (*p1)
	{
		i++;
		p1++;
	}
	while (*p2)
	{
		i++;
		p2++;
	}
	i++;
	return (i);
}

/**
 * str_concat - concatenates two strings.
 * @s1: pointer to a char
 * @s2: pointer to a char
 * Return: pointer to a new char
 **/

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *p;

	if (s1 == NULL)
	{
		s1 = malloc(1);
		*s1 = '\0';
	}
	if (s2 == NULL)
	{
		s1 = malloc(1);
		*s2 = '\0';
	}
	p = malloc((lenx2(s1, s2)) * sizeof(*p));
	if (p != NULL)
	{
		while (s1[i])
		{
			p[j] = s1[i];
			i++, j++;
		}
		i = 0;

		while (s2[i])
		{
			p[j] = s2[i];
			i++, j++;
		}
		p[j] = '\0';
		return (p);
	}
	else
		return (NULL);
}
