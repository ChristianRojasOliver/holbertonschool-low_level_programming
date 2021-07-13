#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - return a pointer to a newly allocated space in memory
 * @str: parameter
 * Return: a
 */
char *_strdup(char *str)
{
	char *a;
	int counter;
	int counter2;

	if (str == NULL)
	{
		return (NULL);
	}
	for (counter = 0; str[counter] != '\0'; counter++)
		;
	a = malloc(sizeof(char) * counter + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	for (counter2 = 0; counter2 < counter; counter2++)
	{
		a[counter2] = str[counter2];
	}
	return (a);
}
