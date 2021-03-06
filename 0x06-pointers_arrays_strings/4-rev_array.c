#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to an array of integers
 * @n: int
 * Return: null
 **/

void reverse_array(int *a, int n)
{
	int final = n - 1;
	int initial = 0;
	int temp;

	while (final > initial)
	{
		temp = a[initial];
		a[initial] = a[final];
		a[final] = temp;
		final--;
		initial++;
	}
}
