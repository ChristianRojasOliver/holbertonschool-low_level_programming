#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - save first element and free head
 * @head: pointer to starting list
 * Return: value of first element
 */
int pop_listint(listint_t **head)
{
	int delete;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	delete = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (delete);
}
