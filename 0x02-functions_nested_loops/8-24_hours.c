#include "holberton.h"
/**
 * jack_bauer - prints every minute of the day
 * @void: void
 * Return: a, b, c, d
 **/
void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = '0'; a <= '2'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '5'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}
			}
		}
	}
}
