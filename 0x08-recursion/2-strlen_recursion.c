#include "holberton.h"

/**
 * _strlen_recursion - return the lenght of a string
 * @s: parameter
 * Return: nothing
 */
int _strlen_recursion(char *s)
{
	int counter = 0;

	if (*s)
	{
		counter++;
		return (counter + _strlen_recursion(s + 1));
	}
		return (0);
}
