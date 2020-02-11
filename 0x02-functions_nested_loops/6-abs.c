#include "holberton.h"
/**
 * _abs - computes the absolute value of a
 * @a: int
 * Return: 0
 **/
int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else
	{
		a = a / (-1);
		return (a);
	}
	return (0);
}
