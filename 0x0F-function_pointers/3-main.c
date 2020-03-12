#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Perform basic mathematics operations
 * @argc: int number of arguments
 * @argv: pointer to arguments
 * Return: Integer - always 0
 */

int main(int argc, char *argv[])
{
	int a, b, (*result)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] == '/' && atoi(argv[3]) == 0)
	    || (*argv[2] == '%' && atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	result = get_op_func(argv[2]);
	if (result == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", result(a, b));
	return (0);
}
