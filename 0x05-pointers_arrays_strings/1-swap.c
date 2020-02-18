#include "holberton.h"

/**
 * swap_int - swaps the value of two integers using pointers
 * @a: pointer to integer
 * @b : pointer to integer
 * Return: nothing
 **/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

