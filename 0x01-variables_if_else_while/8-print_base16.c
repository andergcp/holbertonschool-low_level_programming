#include <stdio.h>
/* Validating the last digit of a number */
/**
 *main - Entry point
 *
 *Description: This program will take a random number and display whether it is
 *positive, negative, or zero.
 *Return: Returns 0 upon successful run.
 */
int main(void)
{
	char letter;
	char number;
	for (number = '0' ; number <= '9' ; number++)
		putchar(number);
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
