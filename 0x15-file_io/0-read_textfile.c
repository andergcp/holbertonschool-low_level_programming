#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 * @filename: Name of file to open and print
 * @letters: qty of letters to print from the file.
 * Return: number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int op, re, wr, cl;
	char *buffer;

	if (!filename)
		return (0);
	buffer = malloc(sizeof(char) * letters + 1);

	if (!buffer)
		return (0);

	op = open(filename, O_RDWR);

	if(op == -1)
	{
		free(buffer);
		return (0);
	}

	re = read(op, buffer, letters);

	if (re == -1)
	{
		free(buffer);
		return (0);
	}

	wr = write(STDOUT_FILENO, buffer, re);

	if (wr == -1)
	{
		free(buffer);
		return (0);
	}
	cl = close(op);
	if (cl == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return(wr);
}
