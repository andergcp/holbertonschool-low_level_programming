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
	int z;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = x + 1; y <= '9'; y++)
		{
			for (z = y + 1; z <= '9'; z++)
			{
				putchar(x);
				putchar(y);
				putchar(z);
				if (x != '7' || y != '8' || z != '9')
					putchar(',');
				if (x != '7' || y != '8' || z != '9')
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
