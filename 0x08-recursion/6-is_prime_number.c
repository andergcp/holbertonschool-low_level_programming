#include "holberton.h"

/**
 * prime - evaluates if a number is prime
 * @n: int
 * @m: int
 * Return: int
 **/

int prime(int n, int m)
{
	if (n <= 1)
		return (0);
	else if (n == m)
		return (1);
	else if (n % m == 0)
		return (0);
	else
		return (prime(n, (m + 1)));
}

/**
 * is_prime_number - evaluates if a number is prime
 * @n: int
 * Return: int
 **/

int is_prime_number(int n)
{
	return (prime(n, 2));
}
