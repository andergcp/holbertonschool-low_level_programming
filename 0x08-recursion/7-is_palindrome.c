#include "holberton.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to a char
 * Return: int
 **/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * evaluate_palin - evaluates if a string is a palindrome
 * @s: pointer to a char
 * @beg: int
 * @end: int
 * Return: int
 **/

int evaluate_palin(char *s, int beg, int end)
{
	if (beg == end || end < beg)
		return (1);
	else if (*(s + beg) == *(s + end))
	{
		return (evaluate_palin(s, beg + 1, end - 1));
	}
	else
		return (0);
}

/**
 * is_palindrome - returns if a string is palindrome
 * @s: pointer to a char
 * Return: int
 **/

int is_palindrome(char *s)
{
	int end = _strlen_recursion(s) - 1;

	return (evaluate_palin(s, 0, end));
}
