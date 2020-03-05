#include "holberton.h"
#include <stdlib.h>

/**
 * len - calculate the size of two strings
 * @p1: pointer to a char
 * Return: int the size of p1
 **/
unsigned int len(char *p1)
{
	unsigned int i = 0;

	while (*p1)
	{
		i++;
		p1++;
	}
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
		*s1 = '\0';
	}
	if (s2 == NULL)
	{
		*s2 = '\0';
	}
	if (n <= len(s2))
	{
		p = malloc((len(s1) + n + 1) * sizeof(*p));
	}
	if (n > (len(s2))
	{
		p = malloc((len(s1) + len(s2) + 1) * sizeof(*p));
	}
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
