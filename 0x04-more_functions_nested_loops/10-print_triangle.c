#include "holberton.h"
/**
 * print_triangle - draws a trinagle.
 * @size : size of the triangle
 * return: void
 **/

void print_triangle(int size)
{
	int j;
	int k;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (k = 0; k < size; k++)
			{
				if (k < (size - j - 1))
				    _putchar(' ');
				    else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
