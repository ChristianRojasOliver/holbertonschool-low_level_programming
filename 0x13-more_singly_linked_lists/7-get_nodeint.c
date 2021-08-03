#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of a linked list
 * @head: pointer to the start of the list
 * @index: index of list
 * Return: value of index selected
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int idx;
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = head;

	for (idx = 0; idx < index && temp != NULL; idx++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
		return (0);

	return (temp);
}
