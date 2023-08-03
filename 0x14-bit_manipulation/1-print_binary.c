#include "main.h"

/**
 * print_binary - function that prints a binary num without %or/
 * @n: number to be printed
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	unsigned int min = 0, max = 32768;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (max)
	{
		if (min == 1 && (n & max) == 0)
			_putchar('0');
		else if ((n & max) != 0)
		{
			_putchar('1');
			min = 1;
		}
		max >>= 1;
	}
}
