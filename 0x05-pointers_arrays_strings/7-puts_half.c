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
 * puts_half - prints half of a string
 * @str: pointer to an string
 * Return: null
 **/

void puts_half(char *str)
{
	int i;

	if (_strlen(str) % 2 == 0)
		for (i = (_strlen(str) / 2); i < _strlen(str); i++)
			_putchar(str[i]);
	else
		for (i = _strlen(str) / 2 + 1; i < _strlen(str); i++)
			_putchar(str[i]);
	_putchar('\n');
}
