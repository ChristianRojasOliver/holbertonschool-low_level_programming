#include <stdio.h>
#include <ctype.h>
#include "holberton.h"

/**
 * _islower - function print lower case characters
 * @c: a character
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
