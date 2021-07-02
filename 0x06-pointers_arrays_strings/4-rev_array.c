#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: parameter
 * @n: parameter
 */
void reverse_array(int *a, int n)
{
	int idx, idx2, idx3;

	for (idx = 0, idx2 = n - 1; idx < idx2; idx2--, idx++)
	{
		idx3 = a[idx2];
		a[idx2] = a[idx];
		a[idx] = idx3;
	}
}
