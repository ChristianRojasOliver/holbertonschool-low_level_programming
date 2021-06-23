#include <stdio.h>
#include "holberton.h"

/**
 * jack_bauer - print every minute of the day
 * Return: 0
 */
void jack_bauer(void)
{
	int minutes = 0;
	int hour = 0;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');
		}
	}
}
