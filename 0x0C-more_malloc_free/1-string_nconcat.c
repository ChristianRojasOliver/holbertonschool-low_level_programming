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
	unsigned int len1, len2;
	char *s3;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n < len2)
		len2 = n;

	s3 = malloc((sizeof(char) * len1 + len2) + 1);
	if (s3 == NULL)
		return (NULL);
	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
		s3[len1] = s1[len1];
	}
	for (len2 = 0; s2[len2] != '\0' && len2 < n; len2++)
	{
		s3[len1] = s2[len2];
		len1++;
	}
	s3[len1] = '\0';
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
