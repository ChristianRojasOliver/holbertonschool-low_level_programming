#include "holberton.h"

/**
 * print_diagonal -draw a diagonal line in the terminal
 * @n: integer
 */
void print_diagonal(int n)
{
	int a, b;
	char slash = '\\';
	char space = ' ';

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(space);
		}
	_putchar(slash);
	_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
