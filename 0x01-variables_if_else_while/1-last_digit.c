#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  main - function if statements
 *  Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("%d Last digit of 98 is 8 and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("%d Last digit of 980 is 0 and is 0\n", n);
	}
	else
	{
		printf("%d Last digit of -98 is -8 and is less than 6 and not 0\n", n);
	}
	return (0);
}
