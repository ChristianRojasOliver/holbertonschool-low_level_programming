#include "holberton.h"

/**
 * leet - encode a string into 1337
 * @str: parameter
 * Return: str
 */
char *leet(char *str)
{
	int idx, idx2;
	char *ptr[] = {"aAeEoOtTlL", "43071"};

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		for (idx2 = 0; *(ptr[0] + idx2) != '\0'; idx2++)
		{
			if (str[idx] == *(ptr[0] + idx2))
			{
				str[idx] = *(ptr[1] + (idx2 / 2));
			}
		}
	}
	return (str);
}
