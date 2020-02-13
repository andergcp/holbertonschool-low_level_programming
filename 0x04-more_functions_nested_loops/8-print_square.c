#include "holberton.h"
/**
 * print_square : draws a a diagonal line on the terminal.
 * @size : size of the square
 * @j : int counter rows
 * @k : int counter columns
 * return: void
 **/

void print_square(int size)
{
	int j;
	int k;
	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (k = 0; k < size; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}             
