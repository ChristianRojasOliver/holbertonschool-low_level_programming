#include "holberton.h"
#include <stdio.h>

/**
 * main - interview question design to help filter out the 99.5%
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 99; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%i ", a);
		}
	}
	printf("Buzz");
	printf("\n");
	return (0);
}
