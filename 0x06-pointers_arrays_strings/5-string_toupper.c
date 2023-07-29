#include <stdio.h>
#include <ctype.h>

/**
 * string_toupper - change lowercase letters to uppercase.
 * @s: analized string.
 *
 * Return: s String with all letters Uppercased.
 */
char *string_toupper(char *s)
{
	char *pdtr = s;

	while (*pdtr != '\0')
	{
		*pdtr = toupper(*pdtr);
		*pdtr++;
	}
	return (s);

}
