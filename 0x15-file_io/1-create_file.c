#include "holberton.h"
/**
 * create_file - function to create a file
 * @filename: pointer to file to create
 * @text_content: pointer to NULL terminated string
 *
 * Return: a value
 */
int create_file(const char *filename, char *text_content)
{
	int fd, k, c;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
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
