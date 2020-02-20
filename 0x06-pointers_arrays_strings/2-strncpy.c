#include "holberton.h"

/**
 * _strncpy - concatenates two strings
 * @dest: pointer to a char
 * @src: pointer to a char
 * @n : int - max quantity of bytes will be taken from src
 * Return: dest
 **/

char *_strncpy(char *dest, char *src, int n)
{
	int counter = 0;

	while (src[counter] != '\0' && counter < n)
	{
		dest[counter] = src[counter];
		counter++;
	}
	while (counter < n)
	{
		dest[counter] = '\0';
		counter++;
	}
	return (dest);
}
