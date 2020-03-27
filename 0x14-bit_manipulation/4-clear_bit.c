#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number to evaluate
 * @index: index where to set to 0
 * Return: 1 when success, -1 if fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
