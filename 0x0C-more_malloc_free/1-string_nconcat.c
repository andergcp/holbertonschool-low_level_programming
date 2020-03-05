#include "holberton.h"
#include <stdlib.h>

/**
 * len - calculate the size of two strings
 * @p1: pointer to a char
 * @p2: pointer to a char
 * Return: int the size of p1 + p2
 **/
int len(char *p1)
{
	int i = 0;

	while (*p1)
	{
		i++;
		p1++;
	}
	i++;
	return (i);
}

/**
 * string_nconcat - concatenates two strings.
 * @s1: pointer to the fisrt string
 * @s2: pointer to the second string
 * @n: limit to the second string
 * Return: Pointer to the concatenated string
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
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
	p = malloc((len(s1) + n) * sizeof(*p));
	if (p != NULL)
	{
		while (s1[i])
		{
			p[j] = s1[i];
			i++, j++;
		}
		i = 0;

		while (s2[i] && i < n)
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
