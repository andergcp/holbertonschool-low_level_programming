#include "holberton.h"

/**
 * main - copies the content of a file to another
 * @ac: number of arguments
 * @av: pointer to arguments
 * Return: 0
 */

int main(int ac, char **av)
{
	int op, opn, wr, cl, cl_new, re;
	char buffer[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	op = open(av[1], O_RDONLY);
	if (op == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	opn = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (opn == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while (re != 0)
	{
		re = read(op, buffer, 1024);
		if (re == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		if (re != 0)
		{
			wr = write(opn, buffer, re);
			if (wr == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	cl = close(op);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", op);
		exit(100);
	}
	cl_new = close(opn);
	if (cl_new == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", opn);
		exit(100);
	}
	return (0);
}
