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
	for (letter = 'a'; letter <= 'z'; letter++)
		if(letter != 'q' && letter !='e')
			putchar(letter);
	putchar('\n');
	return (0);
}
