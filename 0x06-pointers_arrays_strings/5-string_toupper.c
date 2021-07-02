#include "holberton.h"

/**
 * string_toupper - function that changes all lowercase string to uppercase
 * @str: parameter
 * Return: str
 */
char *string_toupper(char *str)
{
	int idx;

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		if (str[idx] >= 'a' && str[idx] <= 'z')
		{
			str[idx] -= 32;
		}
	}
	return (str);
}
