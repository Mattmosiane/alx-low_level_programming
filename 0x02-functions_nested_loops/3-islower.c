#include "main.h"

/**
 * isslower - Checks for lowercase character
 * @c: Character to be checked
 * Return: 1 for lowercase character or 0 for anything
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return(1);
	}
	return(0);
}