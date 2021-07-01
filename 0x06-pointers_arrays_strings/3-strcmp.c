#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - function that compares two strings
 * @s1: first string that you are going to compare
 * @s2: secomd string that you are going to compare
 * Return: s1
 */
int _strcmp(char *s1, char *s2)
{
	int i, u;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s2[i] != s1[i])
			break;
	}
	u = s1[i] - s2[i];
	return (u);
}
