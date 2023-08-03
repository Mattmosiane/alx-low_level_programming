#include "main.h"

/**
 * binary_to_uint - function that converts binary number to
 * an unsigned integer
 * @b: pointer to binary string
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int baze = 1, rezults = 0, len = 0;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;

	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);

		if (b[len - 1] == '1')
			rezults += baze;
		baze *= 2;
		len--;
	}
	return (rezults);
}
