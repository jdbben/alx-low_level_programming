#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string- print a string in reverse.
 *
 *@s: the string to print in reverse.
 *
 */

void rev_string(char *s)
{
	int i = 0;
	int length;

	length = strlen(s);

	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
