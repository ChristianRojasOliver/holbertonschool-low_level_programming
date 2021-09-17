#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - prints lenght elements of a doubly linked list
 * @h: start of linked list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int numNodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		numNodes++;
		h = h->next;
	}
	return (numNodes);
}
