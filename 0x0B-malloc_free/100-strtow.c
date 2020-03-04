#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *
 *
 *
 **/
int count_words(char *str)
{
	int i = 0, j = 0, k = 0;

	while (str[i])
	{
		if (str[i] != ' ')
		{
			k++;
			if (k == 1)
				j++;
		}
		else if (str[i] == ' ')
		{
			k = 0;
		}
		i++;
	}
	printf("count words");
	return (j);
}

int count_chars (char *str, int word)
{
	int i = 0, j = 0, k = 0;

	while (str[i])
	{
		if (j == word && str[i + 1] == ' ')
		{
			k++;
			return (k);
		}
		if (str[i] != ' ')
		{
			k++;
			if (k == 1)
				j++;
		}
		else if (str[i] == ' ')
		{
			k = 0;
		}
		i++;

	}
	return (0);
}

char find_char(char *str, int m, int n)
{
	int i = 0, j = 0, k = 0;

	while (str[i])
	{
		if (j == m && k == n)
		{
			return (k);
		}
		if (str[i] != ' ')
		{
			k++;
			if (k == 1)
				j++;
		}
		else if (str[i] == ' ')
		{
			k = 0;
		}
		i++;

	}
	return (0);
}

char **strtow(char *str)
{
	int height;
	char **p;
	int i, j, m, n, size;

	if (str == NULL || *str == '\0')
		return (NULL);

	/*
	 * El height tiene un +1 para la posición final que debe ser NULL*/
	height = count_words(str) + 1;

	if (height == 0)
		return (NULL);

	p = malloc(sizeof(char *) * height);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		/* Le agrego +1 a la i en a funcion counts_chars para comenzar desde la palabra 1 */
		/* Por fuera le agrego otro +1 para el valor \0 */
		p[i] = malloc(sizeof(char) * (count_chars(str, (i + 1)) + 1));
		/* En esta parte si no se puede asignar la memoria de algún p[i] liberamos la memoria de todo */
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(p[i]);
			free(p);
			return (NULL);
		}
	}

	for (m = 0; m < height; m++)
	{
		size = count_chars(str, (m + 1));
		for (n = 0; n < size; n++)
			p[m][n] = find_char (str, (m + 1), (n + 1));
	}
	return (p);

}
