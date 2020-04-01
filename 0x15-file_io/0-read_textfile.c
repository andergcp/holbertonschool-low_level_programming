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
	size_t c_letters;
	int o;

	if (!filename)
		return (0);

	o = open(filename, O_RDWR);

	if(o == -1)
		return (0);


}