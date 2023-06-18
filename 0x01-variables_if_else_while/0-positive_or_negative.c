#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry
 * Return: 0 Success
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n < 0)
	{
	printf("%d is %s\n, "n, "negative");
	else if (n > 0)
	{
	print("%d is %\n," n, "positive");
	else
	{
	printf("%d is %\n," n, "zero");

	return (0);
}
