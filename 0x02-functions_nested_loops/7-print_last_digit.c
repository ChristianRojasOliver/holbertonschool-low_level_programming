#include <stdio.h>
#include "holberton.h"

/**
 * print_last_digit - print the last digit of a number
 * @a: character
 * Return: 0
 */
int print_last_digit(int a)
{
	int lastdigit = a % 10;

	if (lastdigit < 0)
	{
	lastdigit = (-1) * lastdigit;
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
