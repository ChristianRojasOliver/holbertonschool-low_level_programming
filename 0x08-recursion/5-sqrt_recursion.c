#include "holberton.h"

/**
 * _sqrt_recursion - function
 * @n: parameter
 * Return: nothing
 */
int _sqrt_recursion(int n)
{
	int c = 1;

	if (n == 0)
	{
		return (0);
	}
	else
	{
	return (sqrt_checker(n, c + 1));
	}
}
/**
 * sqrt_checker - function
 * @n: parameter
 * @c: parameter
 * Return: nothing
 */
int sqrt_checker(int n, int c)
{
	if (c * c > n)
	{
		return (-1);
	}
	if (c * c == n)
	{
		return (c);
	}
	return (sqrt_checker(n, c + 1));
}
