#include "holberton.h"

/**
 * print_square - print a square followed by \n
 * @size: parameter
 */
void print_square(int size)
{
	int colomn, line;

	for (colomn = 0; colomn < size; colomn++)
	{
		for (line = 0; line < size; line++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
