#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to an array
 * @accept: pointer to a char
 * Return: i
 **/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, m;

	for (i = 0; s[i] != '\0'; i++)
	{
		m = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				m = 1;
		}

		if (m == 0)
			return (i);
	}
	return (i);
}
