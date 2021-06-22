#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet_x10 - function print 10 times alphabet
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int a;
	int b = 122;
	int i;

	for (i = 0; i < 10; i++)
	{
		a = 97;
		while (a <= b)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
	}
}
