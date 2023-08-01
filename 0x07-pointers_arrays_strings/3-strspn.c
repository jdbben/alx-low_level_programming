#include <string.h>

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: the initial segment of
 *
 * @accept: which consist only of bytes from
 *
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int f = strspn(s, accept);

	return (f);
}
