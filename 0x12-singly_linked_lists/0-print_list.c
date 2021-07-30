#include "lists.h"
#include <stdio.h>
/**
 * print_list - print a list
 * @h: pointer
 * Return: number of nodes received
 */
size_t print_list(const list_t *h)
{
	int idx = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		idx = idx + 1;
		h = h->next;
	}
	return (idx);
}
