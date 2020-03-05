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
	if (p1 == NULL)
		return (0);
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
	unsigned int i = 0, j = 0, size1, size2;
	char *p;

	size1 = len(s1);
	size2 = len(s2);
	if (size1 == 0)
		s1 = "";
	if (size2 == 0)
		s2 = "";
	if (n <= size2)
		p = malloc((size1 + n + 1) * sizeof(char));
	else
		p = malloc((size1 + size2 + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
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
