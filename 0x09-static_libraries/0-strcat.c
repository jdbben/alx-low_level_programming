#include <string.h>
#include <stdio.h>

/**
 *  **_strcat - take 2 parameters and concatenates them .
 *   *@dest: parameter 1 the destnation.
 *    *@src: the source file.
 *     * Return: This return to dest, that concatenates two strings
 *      */

char *_strcat(char *dest, char *src)
{
		strcat(dest, src);
			return (dest);
}
