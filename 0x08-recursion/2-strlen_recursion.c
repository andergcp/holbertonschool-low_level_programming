#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to a char
 * Return: int
 **/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
