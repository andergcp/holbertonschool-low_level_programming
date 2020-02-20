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
 * _strncat - concatenatestwo strings
 * @dest: pointer to a char
 * @src: pointer to a char
 * @n : int - max quantity of bytes will be taken from src
 * Return: dest
 **/

char *_strncat(char *dest, char *src, int n)
{
	int i = _strlen(dest);
	int j = _strlen(src);
	int total_len = i + j;
	int max_len = _strlen(dest) + n;
	int counter = 0;

	while (i < total_len && i < max_len)
	{
		dest[i] = src[counter];
		counter++;
		i++;
	}
	if (j < n)
		dest[i] = '\0';
	return (dest);
}
