#include "holberton.h"
/**
 * append_text_to_file - function to append text at the end of a file
 * @filename: pointer to of a file
 * @text_content: pointer to the end of a string
 *
 * Return: a value
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, k, c;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (c = 0; text_content[c] != '\0'; c++)
		;
	k = write(fd, text_content, c);
	if (k == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
