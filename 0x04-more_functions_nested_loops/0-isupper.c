#include <ctype.h>

/**
 * _isupper - checks for upper character
 * @c: the character to check
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (isupper(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
