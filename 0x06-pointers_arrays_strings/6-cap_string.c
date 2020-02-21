#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @a: pointer to a char
 * Return: a
 **/

char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
		if (a[i] == 10  || a[i] == 9 || a[i] == 32
		    || a[i] == ',' || a[i] == ';' || a[i] == '.'
		    || a[i] == '!' || a[i] == '?' || a[i] == '"'
		    || a[i] == '(' || a[i] == ')' || a[i] == '{' 
		    || a[i] == '}' || a[i] == 0)
			if (a[i + 1] >= 97 && a[i + 1] <= 122)
				a[i + 1] = a[i + 1] - 32;
	return (a);
}
