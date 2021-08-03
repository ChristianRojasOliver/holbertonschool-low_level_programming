#include "lists.h"
#include <stdio.h>

/**
 * listint_len - return the number of elements in list
 * @h: pointer
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
