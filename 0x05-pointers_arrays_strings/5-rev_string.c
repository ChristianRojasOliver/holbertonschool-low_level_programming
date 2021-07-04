#include "holberton.h"

/**
 * rev_string - function that reverses a string
 * @s: parameter
 */
void rev_string(char *s)
{
	int idx, idx2;
	char temp;

	for (idx = 0; s[idx] != '\0'; idx++)
		;
	for (idx2 = 0, idx--; idx2 <= idx; idx2++, idx--)
	{
		temp = s[idx2];
		s[idx2] = s[idx];
		s[idx] = temp;
	}
}
