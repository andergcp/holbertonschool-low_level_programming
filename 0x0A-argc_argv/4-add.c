#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Evaluates if a char is digit
 * @i: pointer to a char
 * Return: int
 **/

int _isdigit(char *i)
{
	int n = 0;

	while (i[n] != '\0')
	{
		if (i[n] < 58 && i[n] > 47)
			n++;
		else
			return (0);
	}
	return (1);
}

/**
 * main - Adds numbers it receives
 * @argc: integer
 * @argv: pointer to an array
 * Return: int
 **/

int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argv[1] == '\0')
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if ((_isdigit(argv[i])) == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
				sum = sum + (atoi(argv[i]));
		}
		printf("%i\n", sum);
	}
	return (0);
}
