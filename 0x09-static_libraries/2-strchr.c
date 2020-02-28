#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to a char
 * @c: char
 * Return: s
 **/

char *_strchr(char *s, char c)
{
	while (s[0] != '\n')
		if (*s != c)
			s++;
		else
			break;
	if (*s == '\n')
		return (NULL);
	return (s);
}
