#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - create an aaray of chars and initializes
 * it with a specific char
 * @size: parameter
 * @c: parameter
 * Return: allocate
 */
char *create_array(unsigned int size, char c)
{
	char *allocate = NULL;
	unsigned int counter;

	allocate = malloc(sizeof(char) * 98);
	if (allocate == NULL)
	{
		return (NULL);
	}
	for (counter = 0; counter < size; counter++)
	{
		allocate[counter] = c;
	}
	if (size == 0)
	{
		return (NULL);
	}
	return (allocate);
}
