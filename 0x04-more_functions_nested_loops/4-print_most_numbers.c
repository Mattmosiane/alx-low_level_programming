#include "main.h"

/**
 * print_most_numbers - Print last numbers from 0 up to 9
 * Description: Prints numbers excluding 2 and 4
 * Return: Number from 0 up to 9
 */

void print_most_numbers(void)

{

	int x = 0;

	for (; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			_putchar(x + '0');
		}
	}
	_putchar('\n');

}
