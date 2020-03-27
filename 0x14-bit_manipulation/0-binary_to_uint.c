#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a binary number
 * Return: number unsigned int if success, 0 otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec;
	int counter, base = 1;

	if (!b)
		return (0);
	for (counter = 0; b[counter]; counter++)
	{
		if (b[counter] != '0' && b[counter] != '1')
			return (0); 
	}
	counter --;
	dec = 0;
	while (counter >= 0)
	{
		dec += (b[counter] - '0') * base;
		counter--;
		base = base * 2;
	}
	return (dec);
}
