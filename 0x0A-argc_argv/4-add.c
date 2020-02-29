#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints all arguments it receives
 * @argc: integer
 * @argv: pointer to an array
 * Return: int
 **/

int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argv[0] == '\0')
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		if ((isdigit(*argv[i])) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
			sum = sum + (atoi(argv[i]));
	}
	printf("%i\n", sum);
	return (0);
}
