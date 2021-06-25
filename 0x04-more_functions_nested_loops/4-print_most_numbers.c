#include "holberton.h"

/**
 * print_most_numbers - print numbers from 0 to 9 follow by a new line
 */
void print_most_numbers(void)
{
	int num;

	for (num = 48 ; num < 58 ; num++)
	{
		if (num != 50 && num != 52)
		{
			_putchar(num);
		}
	}
	_putchar('\n');
}
