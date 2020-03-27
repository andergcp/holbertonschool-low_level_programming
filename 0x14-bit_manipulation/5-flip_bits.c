#include "holberton.h"

/**
 * flip_bits - returns the number of bits needed to flip from n to m.
 * @n: number to flip from
 * @m: number to flip to
 * Return: number of bits needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned long int dif = m ^ n;
	unsigned int i;

	if (m == n)
		return (0);
	i = 0;
	while (dif)
	{
		if (dif & 1)
			i++;
		dif = dif >> 1;
	}
	return (i);
}
