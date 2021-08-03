#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint_end - add new node at the end of a list_t list
 *@head: head of the list
 *@n: element
 *Return: the added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	if (!head)
	{
		return (0);
	}
	temp = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
	{
		free(new);
		return (0);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
