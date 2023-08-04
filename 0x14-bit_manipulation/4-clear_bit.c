#include "main.h"

/**
 * clear_bit - function that sets a bit to 0 at given index
 * @n: num to set bit in
 * @index: index to set bit at
 * Return: 1 on success or -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 0x01;

	x = ~(x << index);
	if (x == 0x00)
		return (-1);
	*n &= x;
	return (1);
}
