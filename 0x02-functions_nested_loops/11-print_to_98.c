#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98 followed '\n'
 * @n: variable of printing numbers
 */
void print_to_98(int n)
{
	int temp = n;

	if (n >= 98)
	{
		for ( ; n >= 98; n--)
		{
			if (temp != n)
			{
				printf(", ");
			}
			printf("%i", n);
		}
	}
	else
	{
		for ( ; n <= 98; n++)
		{
			if (temp != n)
			{
				printf(", ");
			}
			printf("%i", n);
		}
	}
	printf("\n");
}
