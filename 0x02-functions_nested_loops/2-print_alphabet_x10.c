#include "holberton.h"

void print_alphabet_x10(void)
{
	char letter;
	int counter;
	for (counter = '0'; counter <= '9'; counter++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
