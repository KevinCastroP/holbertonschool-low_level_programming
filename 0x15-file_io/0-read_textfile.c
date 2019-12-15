#include "holberton.h"
/**
 * read_textfile - function to read a text file and print it to the POSIX
 * @filename: pointer to text
 * @letters: contain the number of letters
 *
 * Return: the actual # of letters or a value
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t k;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(letters);
	if (buf == NULL)
		return (0);

	k = read(fd, buf, letters);
	if (k == -1)
	{
		free(buf);
		close(fd);
		return (-1);
	}

	k = write(STDOUT_FILENO, buf, k);
	if (k == -1)
	{
		free(buf);
		close(fd);
		return (-1);
	}
	free(buf);
	close(fd);
	return (k);
}
