#include "holberton.h"
#include <stdio.h>
/**
 * main - Prints numbers from 0 to 100, replacing multiples of 3 for "Fizz"
 * multiples of 5 for "Buzz" and multiples of 3 and 5 for FizzBuzz
 * @void : void
 * Return: 0
 **/

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
			if (a < 100)
				printf(" ");
		}
		else
		{
			printf("%i ", a);
		}
	}
	printf("\n");
	return (0);
}
