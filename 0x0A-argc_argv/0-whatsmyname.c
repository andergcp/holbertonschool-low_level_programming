#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the file name
 * @argc: integer
 * @argv: pointer to an array
 * Return: int
 **/

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}

