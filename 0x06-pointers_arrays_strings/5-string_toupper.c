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
	char *ptr = s;

	while (*ptr != '\0')
	{
		*ptr = toupper(*ptr);
		*ptr++;
	}
	return (s);

}
