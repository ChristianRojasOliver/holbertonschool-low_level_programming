#include "holberton.h"

/**
 * _isdigit - write a function that checks 0 to 9
 * @c: character
 * Return: 1 if c is a digit else return 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
