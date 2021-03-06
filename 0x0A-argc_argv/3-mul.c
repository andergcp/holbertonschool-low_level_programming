#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives
 * @argc: integer
 * @argv: pointer to an array
 * Return: int
 **/

int main(int argc __attribute__((unused)), char **argv)
{
	if (argv[2] == '\0' || argv[1] == '\0')
	{
		printf("Error\n");
		return (1);
	}

	printf("%i\n", ((atoi(argv[1])) * (atoi(argv[2]))));
	return (0);
}

