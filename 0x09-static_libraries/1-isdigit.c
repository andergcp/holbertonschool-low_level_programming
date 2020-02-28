#include "holberton.h"
/**
 * _isdigit - checks if c is uppercase
 * @c : int
 * Return: 1 if c is a digit 0 otherwise
 **/

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
