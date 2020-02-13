#include "holberton.h"
/**
 * more_numbers - print numbers from 0 to 14, ten times
 * @void : void
 * Return: void
 **/

void more_numbers(void)
{
	int a;
	int c;

	for (a = 0; a <= 9; a++)
	{
		for (c = 0; c <= 14; c++)
		{
			if ((c / 10) > 0)
			{
				_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
		}

		_putchar('\n');
	}
}
