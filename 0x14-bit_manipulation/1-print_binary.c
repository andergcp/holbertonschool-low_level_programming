#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number
 */

void print_binary(unsigned long int n)
{
	unsigned long int tmp = n;
	int counter;

	if (n == 0)
		_putchar('0');
	else
	{
		counter = 0;
		tmp = n;
		while (tmp)
		{
			counter++;
			tmp = tmp >> 1;
		}
		counter--;
		while (counter >= 0)
		{
			if ((n >> counter) & 1)
				_putchar('1');
			else
				_putchar('0');
			counter--;
		}
	}
}
