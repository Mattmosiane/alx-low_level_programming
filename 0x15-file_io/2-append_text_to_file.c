#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end
 * of a file
 * @filename: A file name to be open and append
 * @text_content: NULL terminated string
 * Return: 1 on success, -1 if file can not be created
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, z, size = 0;

	if (filename == NULL)
		return (-1);

	x = open(filename, O_RDWR | O_APPEND);
	if (x < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(x);
		return (1);
	}

	while (*(text_content + size))
		size++;

	z = write(x, text_content, size);
	close(x);
	if (z < 0)
		return (-1);

	return (1);
}
