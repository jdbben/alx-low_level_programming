#include <ctype.h>

/**
 *  * _isalpha - checks for alphabets
 *   * @c: the character to check
 *    * Return: 1 if c is alphabet, 0 otherwise
 *     */

int _isalpha(int c)
{
	if (isalpha(c))
	{
			return (1);
	}
	else
	{
			return (0);
	}
}
