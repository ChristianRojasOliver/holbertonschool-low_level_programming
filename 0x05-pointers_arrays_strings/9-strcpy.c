#include "holberton.h"

/**
 * *_strcpy - copie the string pointed by src
 * terminating null byte to the buffer pointed
 * to by dest
 * @src: pointer
 * @dest: pointer
 * Return: nothing
 */
char *_strcpy(char *dest, char *src)
{
	int idx;

	for (idx = 0; src[idx] != '\0'; idx++)
	{
		dest[idx] = src[idx];
	}
	dest[idx + 1] = '\0';
	return (dest);
}
