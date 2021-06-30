#include "holberton.h"
#include <stdio.h>

/**
 * puts_half - print half of string followed \n
 * @str: pointer
 */
void puts_half(char *str)
{
	int idx, n;

	for (idx = 0; str[idx] != '\0'; idx++)
		;
	n = idx / 2;
	if (idx % 2 != 0)
	{
		n = (idx - 1) / 2;
	}
	for (; str[n] != '\0' ; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
