#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/uio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints it
 * to the POSIX std output
 * @filename: filename to be opened
 * @letters: letters to read and print
 * Return: number of letters read and print or 0 if fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int x, y, z;
	char *samp;

	if (filename == NULL)
		return (0);

	samp = malloc(sizeof(char) * letters);
	if (samp == NULL)
		return (0);

	x = open(filename, O_RDONLY);
	if (x < 0)
	{
		free(samp);
		return (0);
	}

	y = read(x, samp, letters);
	if (y < 0)
	{
		free(samp);
		return (0);
	}

	z = write(STDOUT_FILENO, samp, y);
	free(samp);
	close(x);

	if (z < 0)
		return (0);
	return ((ssize_t)z);
}
