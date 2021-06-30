#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print n element of an array of
 * integers followed by a new line
 * @a: pointer
 * @n: limite
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i > 0)
		{
			printf(", ");
		}
		printf("%i", a[i]);
	}
	printf("\n");
}
