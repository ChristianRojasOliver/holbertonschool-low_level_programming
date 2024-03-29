#include "lists.h"

/**
 * _strlen - count the leng of s
 * @s: pointer
 * Return: the lenght of the character received
 */

int _strlen(const char *s)
{

	int idx = 0;

	while (s[idx] != 0)
		idx++;
	return (idx);
}
/**
 * add_node - add a new node to the list
 * @head: the head of the list
 * @str: the string to add
 * Return: the list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (!str || !head)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
