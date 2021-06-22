#include <stdio.h>
#include <inttypes.h>
#include "holberton.h"

/**
 * _abs - absolute value of an integeri
 * @n: character
 * Return: 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	return (n);
}
