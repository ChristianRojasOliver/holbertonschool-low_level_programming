#include "holberton.h"

/**
 * times_table - print the mult. table from 0 to 9
 */
void times_table(void)
{
	int a = 0;
	int b = 0;
	int c = 0;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		for (b = 1; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');
			c = a * b;
			if (c > 9)
			{
				_putchar((c / 10) + '0');
			}
			else 
				_putchar(' ');
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
	
}
