#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - insert nodeint at index
 * @head: pointer to start list
 * @idx: index where i need insert value
 * @n: value
 * Return: the sum of all elements of list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	unsigned int i;
	listint_t *temp, *new;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	temp = *head;
	for (i = 0; i < (idx - 1) && temp != NULL; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = temp->next;
	temp->next = new;
	return (new);
}
