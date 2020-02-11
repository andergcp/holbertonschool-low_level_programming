#include "holberton.h"

/**
 * print_last_digit of n
 * @n : int
 * Return: int last digit of n
 **/
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar((n % 10) + '0');
	}
	else
		_putchar((n % 10) + '0');
return (0);
}
