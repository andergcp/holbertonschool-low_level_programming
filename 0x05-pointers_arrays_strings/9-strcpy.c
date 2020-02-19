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
 * _strcpy - copies the string pointed to by src
 * @dest: destination copy
 * @src: pointer to a string
 * Return: char
 **/

char *_strcpy(char *dest, char *src)
{
	int i;
	int n;

	n = _strlen(src);

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
