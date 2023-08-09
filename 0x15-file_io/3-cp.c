#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int safe_close(int);
/**
 * main - main function to copy files
 * @argc: number of passed args
 * @argv: pointer to array args
 * Return: 1 on success, close if fail
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int from = -1, to = -1, _read = 0, err = 0, _EOF = 1;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	if (from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		safe_close(from);
		exit(99);
	}

	while (_EOF)
	{
		_EOF = read(from, buffer, 1024);
		if (_EOF < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			safe_close(from);
			safe_close(to);
			exit(98);
		}
		else if (_EOF == 0)
			break;
		_read += _EOF;
		err = write(to, buffer, _EOF);
		if (err < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			safe_close(from);
			safe_close(to);
			exit(99);
		}
	}
	err = safe_close(to);
	if (err < 0)
	{
		safe_close(from);
		exit(100);
	}
	err = safe_close(from);
	if (err < 0)
		exit(100);
	return (0);
}

/**
 * safe_close - function that closes file and prints error when
 * closed
 * @description: error discription
 * Return: 1 on success, -1 fail
 */
int safe_close(int description)
{
	int err;

	err = close(description);
	if (err < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", description);
	return (err);
}
