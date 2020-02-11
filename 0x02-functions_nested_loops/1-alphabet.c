#include "holberton.h"
/**
 * print_alphabet - from a to z in lowercase
 * @void : void
 * Return: letter
 **/
void print_alphabet(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
		_putchar(letter);
	_putchar('\n');
}
