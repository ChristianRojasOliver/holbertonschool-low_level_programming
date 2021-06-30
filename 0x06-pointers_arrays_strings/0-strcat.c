#include "holberton.h"

/**
 * _strcat - function that concentrate two strings
 * @dest: parameter
 * @src: parameter
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int idx, idx2;

	for (idx = 0; dest[idx] != '\0'; idx++)
	;
	for (idx2 = 0; src[idx2] != '\0'; idx++, idx2++)
	{
		dest[idx] = src[idx2];
	}
	return (dest);
}
