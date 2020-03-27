#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to evaluate
 * @index: index to look for
 * Return: 1 or 0 when success, -1 if fails
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned int) * 8))
		return (-1);
	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}
