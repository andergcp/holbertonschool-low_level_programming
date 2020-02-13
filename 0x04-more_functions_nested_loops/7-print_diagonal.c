#include "holberton.h"
/**
 * print_diagonal - draws a a diagonal line on the terminal.
 * @n : int number of /
 * Return: void
 **/

void print_diagonal(int n)
{
	int m;
	int j;
	int k;

	j = 0;

	if (n > 0)
	{
		{
			for (m = 0; m < n; m++)
			{
				for (k = 0; k < j; k++)
				{
					_putchar(' ');
				}
				j++;
				_putchar(92);
				_putchar('\n');
			}
		}
	} else
	{
		_putchar('\n');
	}

}
