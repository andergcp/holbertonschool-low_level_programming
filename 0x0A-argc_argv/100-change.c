#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: int
 * @argv: pointer to a char
 * Return: int
 **/

int main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1};
	int counter = 0, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if ((atoi(argv[1])) < 0)
		printf("0\n");
	else
	{
		int remainder = atoi(argv[1]);

		for (i = 0; i < 5 && remainder > 0; i++)
		{
			while ((remainder / coins[i]) > 0)
			{
				counter = counter + (remainder / coins[i]);
				remainder = remainder % coins[i];
			}
		}
		printf("%i\n", counter);
	}
	return (0);
}
