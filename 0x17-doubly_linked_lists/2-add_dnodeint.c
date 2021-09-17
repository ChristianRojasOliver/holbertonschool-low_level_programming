#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint - function adds doble node integer
 * @head: parameter
 * n: parameter
 * Return: the adress of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new->n = n;
	    *head = new;
	}
	else
	{
		new->n = n;
		new->prev = NULL;
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}

	return (new);
}
