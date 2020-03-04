#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: integer
 * @height: integer
 * Return: NULL when fails or a pointer to a two dimensional
 * array of integeres when success
 **/

int **alloc_grid(int width, int height)
{
	int i, j, m, n;
	int **pp;

	if (width > 0 && height > 0)
	{
		pp = malloc(sizeof(int *) * height);

		if (pp != NULL)
		{
			for (i = 0; i < height; i++)
			{
				pp[i] = malloc(sizeof(int) * width);
				if (pp[i] == NULL)
				{
					for (j = 0; j < i; j++)
						free(pp[i]);
					free(pp);
					return (NULL);
				}
			}
			for (m = 0; m < height; m++)
			{
				for (n = 0; n < width; n++)
					pp[m][n] = 0;
			}
			return (pp);
		}
		else
			return (NULL);
	}
	else
		return (NULL);
}
