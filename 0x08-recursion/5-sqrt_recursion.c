#include "holberton.h"

/**
 * num_root - finds the square root
 * @m: int
 * @n: int
 * Return: int
 **/

int num_root(int m, int n)
{
	if (m * m == n)
		return (m);
	else if (m == n || n < 0)
		return (-1);
	else
		return (num_root(m + 1, n));
}

/**
 * _sqrt_recursion - returns square root of an int
 * @n: int
 * Return: int
 **/

int _sqrt_recursion(int n)
{
	return (num_root(1, n));
}
