#include "holberton.h"

/**
 * print_rev - print a string in reverse followed b \n
 * @s: pointer
 */
void print_rev(char *s)
{
	int idx = 0;

	while (s[idx] != '\0')
		idx++;
	for (idx = idx - 1; idx > 0; idx--)
		_putchar(s[idx]);
	_putchar('\n');
}
