#include "holberton.h"

/**
 * _strpbrk - function that search a string for any of a set of bytes
 * @s: pointer
 * @accept: pointer
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int idx, idx2;

	for (idx = 0; s[idx] != '\0'; idx++)
	{
		for (idx2 = 0; accept[idx2] != '\0'; idx2++)
		{
			if (s[idx] == accept[idx2])
			{
				s += 2;
				return (s);
			}
		}
	}
	return ('\0');
}

