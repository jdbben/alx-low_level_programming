#include <stdio.h>

/**
 * reverse_array - prints reverse array.
 * @a: array to be compared.
 * @n: size of array.
 * Return: reversed array.
 */
void reverse_array(int *a, int n)
{
	int i;

	i = n - 1;
	while (i > 0)
	{
		if (i != (n-1))
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i--;
	}

}
