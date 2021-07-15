#include "holberton.h"

/**
 * array_range - function
 * @min: parameter
 * @max: parameter
 * Return: NULL
 */
int *array_range(int min, int max)
{
	int *new;
	int idx, diff;

	if (min > max)
		return (NULL);

	diff = max - min;
	new = malloc(sizeof(int) * (diff + 1));

	if (new == NULL)
		return (NULL);

	for (idx = 0; min <= max; idx++)
	{
		new[idx] = min;
		min++;
	}
	return (new);
}
