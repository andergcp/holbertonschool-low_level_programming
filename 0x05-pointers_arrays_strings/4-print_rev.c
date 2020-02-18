#include "holberton.h"

/**
 * _strlen - returns the lentgh of a string
 * @s:pointer to an string
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
 * print_rev - prints a string in reverse
 * _strlen - returns the lentgh of a string
 * @s: pointer to an string
 * Return: none
 **/
void print_rev(char *s)
{
	int i;

	i = _strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
