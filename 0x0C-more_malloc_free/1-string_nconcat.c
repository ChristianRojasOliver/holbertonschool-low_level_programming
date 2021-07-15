#include "holberton.h"
unsigned int _strlen(char *s);
/**
 * string_nconcat - fucntion
 * @s1: parameter
 * @s2: parameter
 * @n: unsigned int
 * Return: s3
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1, len2;
	unsigned int len3;
	char *s3;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);

	if (n < _strlen(s2))
		len1 += n;
	else
		len1 += _strlen(s2);

	s3 = malloc(sizeof(char) * len1);
	if (s3 == NULL)
		return (NULL);
	for (len2 = 0; s1[len2] != '\0'; len2++)
	{
		s3[len2] = s1[len2];
	}
	for (len3 = 0; len3 < n; len2++, len3++)
	{
		s3[len2] = s2[len3];
	}
	return (s3);
}
/**
 * _strlen - function
 * @s: parameter
 * Return: 0
 */
unsigned int _strlen(char *s)
{
	unsigned int idx;

	for (idx = 0; s[idx] != '\0'; idx++)
		;
	return (idx);
}
