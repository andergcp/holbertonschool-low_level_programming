#include "holberton.h"

/**
 * print_last_digit - of n
 * @n : int
 * Return: int last digit of n
 **/
int print_last_digit(int n)
{
	int b;

	b = (n % 10);
	if (n < 0)
	{
		_putchar(-b + '0');
		b = -b;
	}
	else
		_putchar(b + '0');
return (b);
}
