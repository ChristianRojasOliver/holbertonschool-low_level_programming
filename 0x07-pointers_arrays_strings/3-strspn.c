#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - get the lenght of a prefix substring
 * @s: pointer
 * @accept: pointer
 * Return: idx2
 */
unsigned int _strspn(char *s, char *accept)
{
	int idx, idx2;

	for (idx = 0; s[idx] != '\0'; idx++)
	{
		for (idx2 = 0; accept[idx2] != s[idx]; idx2++)
		{
			if (accept[idx2] == '\0')
				return (idx);
		}
	}
	return (idx);
}
