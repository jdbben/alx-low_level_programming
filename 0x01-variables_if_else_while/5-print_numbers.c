#include <stdio.h>
/**
 * main - main block
 * Description:  prints all the digit numbers of base 10,
 * starting from 0 and followed by a new line,
 * Return: 0
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
