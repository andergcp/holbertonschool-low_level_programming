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
	while (s[0] != '\0')
		if (*s != c)
			s++;
		else
			break;
	if (*s == '\0')
		return (NULL);
	return (s);
}
