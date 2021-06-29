#include "holberton.h"

/**
 * swap_int - swap int a and int b
 * @a: pointer
 * @b: pointer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
