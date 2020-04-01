#include "holberton.h"

/**
 * create_file - Creates a file
 * @filename: name for the new file
 * @text_content: string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int op, len;

	if (!filename)
		return (-1);

	op = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
	if (op == -1)
		return (-1);
	if (!text_content)
		return (1);

	len = 0;
	while (text_content[len])
		len++;
	write(op, text_content, len);
	close(op);
	return (1);
}
