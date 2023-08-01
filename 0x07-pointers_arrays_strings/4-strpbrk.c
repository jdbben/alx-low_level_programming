#include <string.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s:first occurrence in the string
 *
 * @accept: matches one of the bytes, or @NULL if no such byte
 *
 * Return: a pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	char z;

	z = strpbrk(s, accept);
	if (z != NULL)
	{
		return s;
	}
	else if (z == NULL;
			{
			return NULL;
			}
}
