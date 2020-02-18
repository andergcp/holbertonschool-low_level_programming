#include "holberton.h"

/**
 * _strlen - returns the length of a string.
 * @s : pointer to an string
 * Return: none
 **/

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);

}

/**
 * rev_string - Reverses a string
 * @s: pointer to an string
 * Return: null
 **/

void rev_string(char *s)
{
	int m;
	int n;

	char j;

	n = 0;
	m = _strlen(s) - 1;
	while (n < m)
	{
		j = s[n];
		s[n] = s[m];
		s[m] = j;
		m--;
		n++;
	}
}
