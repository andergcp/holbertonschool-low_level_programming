#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - print numbers till n.
 * @n : int
 * Return: Always 0.
 */
void print_to_98(int n)

{
	if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%i", n);
			if (n != 98)
				printf(", ");
		}
	}
	else if (n >= 98)
	{
		for (n = n; n >= 98; n--)
		{
			printf("%i", n);
			if (n != 98)
				printf(", ");
		}
	}
	printf("\n");
}
