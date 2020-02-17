#include <stdio.h>
/**
 * main - Prints the higher prime factor of n
 * @void: void
 * Return: 0
 **/

int main(void)
{
	long n = 612852475143;
	int d = 2;

	while (n >= d)
	{
		if (n % d == 0)
			n = n / d;
		else
			d++;
	}
	printf("%i\n", d);
	return (0);
}
