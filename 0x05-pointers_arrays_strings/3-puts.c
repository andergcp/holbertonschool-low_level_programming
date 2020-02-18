#include "holberton.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: pointer to a string
 * Return: none;
 **/

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
