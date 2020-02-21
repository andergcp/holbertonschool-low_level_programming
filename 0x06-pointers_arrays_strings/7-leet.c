#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @a: pointer to a char
 * Return: a
 **/

char *leet(char *a)
{
	char letter[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char number[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i, j;

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] == letter[j])
				a[i] = number[j];
		}
	}
	return (a);
}
