#include <stdio.h>
#include "holberton.h"

/**
 * print_array - prints n elements of an array of integers.
 * @a: pointer to an array
 * @n: int
 **/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
