#include <string.h>
#include <stdio.h>

/*
 *_strncat - function ther concarenates two strings
 *
 *@dest: this is the output dest
 *@src: this the the src input
 *@n: bytes from the src
 *Return: pinter to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
       return (dest);	
}
