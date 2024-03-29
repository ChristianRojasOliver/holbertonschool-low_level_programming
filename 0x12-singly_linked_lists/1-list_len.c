#include "lists.h"
#include <stdio.h>
/**
 * list_len - return the number of elements in list
 * @h: pointer
 *Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int idx = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			h = h->next;
		}
		idx = idx + 1;
	}
	return (idx);
}
