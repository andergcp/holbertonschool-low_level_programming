#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to an array
 * @size: int
¨* Return: null
 **/

void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, suma1 = 0, suma2 = 0;

	while (i < size * size)
	{
		suma1 = suma1 + a[i];
		i = i + size + 1;
	}
	printf("%i, ", suma1);

	while (j < (size * size - size))
	{
		j = j + size - 1;
		suma2 = suma2 + a[j];
	}
	printf("%i\n", suma2);
}
