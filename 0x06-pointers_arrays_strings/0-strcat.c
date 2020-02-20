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
 * _strcat - concatenatestwo strings
 * @dest: pointer to a char
 * @src: pointer to a char
 * Return: dest
 **/

char *_strcat(char *dest, char *src)
{
	int i = _strlen(dest);
	int total_len = _strlen(src) + i;
	int counter = 0;

	while (i < total_len)
	{
		dest[i] = src[counter];
		counter++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
