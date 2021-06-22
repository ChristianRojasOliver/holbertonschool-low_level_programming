#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet - function print_alphabet
 * Return: 0
 */
void print_alphabet(void)
{
	int a = 97;
	int b = 122;

	while (a <= b)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
