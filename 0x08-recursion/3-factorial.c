#include "holberton.h"

/**
 * factorial - return the factorial of a given number
 * @n: parameter
 * Return: n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		return (n + factorial(n - 1));
	}
	else
	{
		return (n);
	}
}
