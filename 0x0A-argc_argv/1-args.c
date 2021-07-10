#include <stdio.h>

/**
 * main - print the number of argument followed by \n
 * @argc: parameter
 * @argv: parameter
 * Return: nothing
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
