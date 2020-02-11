#include "holberton.h"

/**
 * times_table prints the 9 times table
 *
 * Return: 9 times table
 */
void times_table(void)
{
	int a;
	int b;
	int result;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			result = a * b;
			if ((result / 10) > 0)
				_putchar((result / 10) + '0');
			else if (b != 0)
				_putchar(' ');
			_putchar((result % 10) + '0');
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
