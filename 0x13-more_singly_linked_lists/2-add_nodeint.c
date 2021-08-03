#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add a new node to the list
 * @head: head of the list
 * @n: lenght of list
 * Return: the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (0);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (0);

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
