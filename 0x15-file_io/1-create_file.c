#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: filename to be created
 * @text_content: A pointer to a string to write to the file
 * Return: 1 on success, -1 if file can not be created
 */
int create_file(const char *filename, char *text_content)
{
	int z, y, size = 0;

	if (filename == NULL)
		return (-1);

	z = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (z < 0)
		return (-1);

	while (text_content && *(text_content + size))
		size++;

	y = write(z, text_content, size);
	close(z);
	if (y < 0)
		return (-1);
	return (1);
}
