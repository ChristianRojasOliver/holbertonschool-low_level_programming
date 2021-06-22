#include <stdio.h>
#include <ctype.h>
#include "holberton.h"

/**
 * _isalpha - function print lower & upper case characters
 * @c: a character
 * Return: 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
