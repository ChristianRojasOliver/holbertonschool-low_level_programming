#include "holberton.h"

/**
 * _memcpy - copies memory area
 * @n: constant byte
 * @src: parameter
 * @dest: parameter
 * Return: s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int idx;

	for (idx = 0; idx < n; idx++)
	{
		dest[idx] = src[idx];
	}
	return (dest);
}
