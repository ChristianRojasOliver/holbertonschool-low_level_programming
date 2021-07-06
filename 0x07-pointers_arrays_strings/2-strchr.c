#include "holberton.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string
 * @s: pointer
 * @c: parameter
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int idx;

	for (idx = 0; s[idx] != '\0'; idx++)
	{
		if (s[idx] == c)
			return (s + idx);
	}
	if (c == '\0')
		return (s + idx);
	return (NULL);
}
