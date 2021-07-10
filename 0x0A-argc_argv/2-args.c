#include <stdio.h>

/**
 * main - print the number of argument followed by \n
 * @argc: parameter
 * @argv: parameter
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
