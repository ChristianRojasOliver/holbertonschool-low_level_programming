#include "holberton.h"
#include <stdio.h>

/**
 * main - write a program that adds positives numbers
 * @argc: parameter
 * @argv: parameter
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int count, intcheck;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (count = 1 ; count < argc ; count++)
	{
		for (intcheck = 0 ; argv[count][intcheck] != '\0' ; intcheck++)
		{
			if (!isdigit(argv[count][intcheck]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
	}
	printf("%i\n", sum);

	return (0);
}
