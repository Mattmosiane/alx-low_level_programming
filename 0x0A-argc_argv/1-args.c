#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of args
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0
 */

int main(int argc, char *argv[])

{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
