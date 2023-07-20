#include <ctype.h>

/**
 * _isdigit - checks if the character is a digit
 * @c: the character to check
 * Return: 1 if c is digit, 0 otherwise
 */

int _isdigit(int c)
{

	if (isdigit(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}

}
