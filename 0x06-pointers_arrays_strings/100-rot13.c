#include "holberton.h"

/**
 * rot13 - encode alphabet rot13
 * @str: parameter
 * Return: str
 */
char *rot13(char *str)
{
	int idx, idx2;
	char *ptr[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz",
"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		for (idx2 = 0; *(ptr[0] + idx2) != '\0'; idx2++)
		{
			if (str[idx] == *(ptr[0] + idx2))
			{
				str[idx] = *(ptr[1] + (idx2));
				break;
			}
		}
	}
	return (str);
}
