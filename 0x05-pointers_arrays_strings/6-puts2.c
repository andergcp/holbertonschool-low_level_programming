#include "holberton.h"

/**
 * _strlen - returns the length of a string.
 * @s : pointer to an string
 * Return: none
 **/

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);

}

/**
 * puts2 - prints every other character of a string
 * @str: pointer to a string
 * Return: null
 **/

void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		if (i == 0 || i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
