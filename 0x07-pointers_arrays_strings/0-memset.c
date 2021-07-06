#include "holberton.h"

/**
 * _memset - fill memory with a constant byte
 * @n: constant byte
 * @s: pointer
 * @b: parameter
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int idx;

	for (idx = 0; idx < n; idx++)
	{
		s[idx] = b;
	}
	return (s);
}
