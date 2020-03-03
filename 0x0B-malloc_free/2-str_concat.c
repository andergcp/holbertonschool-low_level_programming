#include "holberton.h"
#include <stdlib.h>

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

	p = malloc((lenx2(s1, s2)) * sizeof(*p));

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
