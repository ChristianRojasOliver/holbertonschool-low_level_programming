#include "holberton.h"

/**
 * _strlen - calculates the string lenght of a variable
 * @s: pointer
 * Return: nothing
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
