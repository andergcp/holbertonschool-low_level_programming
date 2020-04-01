#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to append
 * @text_content: string to add at the end of the file
 * Return: 1 on success, -1 if fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, len;

	if (!filename)
		return (-1);

	op = open(filename, O_RDWR | O_APPEND);
	if (!text_content && op == 1)
		return (close(op), 1);
	if (!text_content && op == -1)
		return (-1);

	len = 0;
	while (text_content[len])
		len++;
	write(op, text_content, len);
	close(op);
	return (1);

}
