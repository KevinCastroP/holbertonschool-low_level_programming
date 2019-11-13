#include "holberton.h"
/**
 * _close_FD - function to close the files
 * @file_from: 1st file
 * @file_to: 2nd file
 *
 * Return: nothing
 */

void _close_FD(int file_from, int file_to)
{
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_from);
		exit(100);
	}

	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_to);
		exit(100);
	}
}

/**
 * _cant_read - function to manage problems to read
 * @file_name: pointer to a file
 *
 * Return: nothing
 */

void _cant_read(char *file_name)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
	exit(98);
}

/**
 * _cant_write - function to manage problems to write
 * @file_name: pointer to a file
 *
 * Return: nothing
 */

void _cant_write(char *file_name)
{
	dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", file_name);
	exit(99);
}

/**
 * main - copy a file.
 * @argc: number of arguments
 * @argv: list of arguments
 * Description - This program takes two files and copy the contents of the
 *               first one into the second, if the second doesn't exist, the
 *               creates it and if it exists, it gets truncated.
 *
 * Return: a value depend if is wrong or successful
 */
int main(int argc, char **argv)
{
	int file_from, file_to, rd, wrt;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(2, "error");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		_cant_read(argv[1]);

	file_to = open(argv[2], O_CREAT | O_TRUNC | O_RDWR, 0664);
	if (file_to == -1)
		_cant_write(argv[2]);

	while ((rd = read(file_from, buf, 1024)) > 0)
	{
		wrt = write(file_to, buf, 1024);
		if (wrt == -1)
			_cant_write(argv[2]);
	}
	if (rd == -1)
		_cant_read(argv[1]);

	_close_FD(file_from, file_to);
	return (0);
}
