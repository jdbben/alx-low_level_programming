#include <string.h>

/**
 * _strchr - locates a character in a string
 *
 * @c: occurrence of the character
 *
 * @s: in the string
 *
 * Return: a pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	char *w = strchr(s, c);

	if (w != NULL)
	{
		return (w);
	}
	else
	{
		return (NULL);
	}
