#include "holberton.h"

/**
 * cap_string - capitalize all words of a string
 * @str: parameter
 * Return: str
 */
char *cap_string(char *str)
{
	int idx, idx2, flag = 1;
	char sep[] = {',', ';', '.', '!', '?', '"', '(', ')',
	'{', '}', ' ', '\t', '\n'};

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		if (flag == 1)
		{
			if (str[idx] >= 'a' && str[idx] <= 'z')
			{
				str[idx] -= 32;
			}
			flag = 0;
		}

		for (idx2 = 0; sep[idx2] != '\0'; idx2++)
		{
			if (str[idx] == sep[idx2])
			{
				flag = 1;
			}
		}
	}
	return (str);
}
