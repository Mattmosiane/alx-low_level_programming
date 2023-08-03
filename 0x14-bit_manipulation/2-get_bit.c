#include "main.h"

/**
 * get_bit - function that gets a bit at index
 * @n: bit destination
 * @index: index of bit
 * Return: value of the bit or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x = 0x01;

	x <<= index;
	if (x == 0)
		return (-1);

	if ((n & x))
		return (1);
	else
		return (0);
}
