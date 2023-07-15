#include <stdio.h>
/**
 * main - main block
 * Description:  prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int i = 25;
	char c[26] = "abcdefghijklmnopqrstuvwxyz";

	while (i >= 0)
	{
		putchar(c[i]);
		i--;
	}
	putchar('\n');
	return (0);
}
