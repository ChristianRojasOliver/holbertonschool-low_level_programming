#include "holberton.h"

/**
 * _strncat - function that concentrate two strings
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int idx, idx2;

	for (idx = 0; dest[idx] != '\0'; idx++)
	;
	for (idx2 = 0; src[idx2] != '\0' && idx2 <= n - 1; idx++, idx2++)
	{
		dest[idx] = src[idx2];
	}
	return (dest);
}
