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
	int x;
	int y;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = x + 1; y <= '9'; y++)
		{
			putchar(x);
			putchar(y);
			if (x != '8' || y != '9')
				putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
