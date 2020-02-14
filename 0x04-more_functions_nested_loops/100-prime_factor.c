#include <stdio.h>
/**
 * main - Prints the higher prime factor of n
 * @void: void
 * Return: 0
 **/

int main(void)
{
	long n = 612852475143;
	long apodo;
	int d = 2;

	for (apodo = n; apodo >= d; apodo++)
	{
		if (apodo % d == 0)
			apodo = apodo / d;
		else
			d++;
		apodo--;
	}
	printf("%i\n", d);
	return (0);
}
