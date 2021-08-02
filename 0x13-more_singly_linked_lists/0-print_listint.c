#include "lists.h"

/**
 * print_listint - print a list of integers
 * @h: pointer received
 * Return: number of nodes received
 */
size_t print_listint(const listint_t *h)
{
	int idx = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		idx = idx + 1;
		h = h->next;
	}
	return (idx);
}
