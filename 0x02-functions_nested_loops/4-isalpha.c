#include "holberton.h"
/**
 * _isalpha: Verifies if c is an alpha char
 * Returns 1 if c is an alpha char otherwise 0
 * @c : int
 **/
int _isalpha(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else if (c > 64 && c < 91)
		return (1);
	else
		return (0);
	return (0);
}
