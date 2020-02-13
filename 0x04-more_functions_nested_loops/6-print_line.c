#include "holberton.h"
/**
 * print_line : draws a straight line n times
 * @n : int how many times _ will be printed
 * @m : int counter
 * return: void
 **/

void print_line(int n)
{
	int m;

	m = n;
	if ( n > 0)                                                                                                                     {
		for (n = 0;n <= m - 1; n++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');

}
