#include "holberton.h"

/**
 * print_line - draw a straight line in the terminal
 * @n: integer
 */
void print_line(int n)
{
	int a;
	char b = '_';

	for (a = 1; a <= n; a++)
	{
		_putchar(b);
	}
	_putchar('\n');
}
