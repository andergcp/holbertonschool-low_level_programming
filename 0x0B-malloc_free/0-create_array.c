#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: Char to initialize
 * Return: pointer to array or NULL it fails
 **/

char *create_array(unsigned int size, char c)
{
	if (size > 0)
	{
		char *p;
		unsigned int i;

		p = malloc(sizeof(*p) * size);

		if (p != NULL)
		{
			for (i = 0; i < size; i++)
			{
				p[i] = c;
			}
			return (p);
		}
		else
			return (NULL);
	}
	else if (size == 0)
		return (NULL);
	return (0);
}
