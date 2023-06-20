#include "main.h"

/**
 * _isalpha - Checks for alphabetic characters
 * @c: Character to be checked
 * Return: 1 for alphabetic or 0 for anything
 */

int _isalpha(int c)
{

if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
