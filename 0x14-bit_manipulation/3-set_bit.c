#include "main.h"

/**
 * set_bit - function that sets a bit at given index to 1
 * @n: number the bit is set in
 * @index: index to set the bit at
 * Return: 1 on success or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 0x01;

	x <<= index;
	if (x == 0)
		return (-1);
	*n |= x;
	return (1);
}
