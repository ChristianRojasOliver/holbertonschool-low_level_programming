#include "lists.h"
/**
* insert_dnodeint_at_index - insert node in specific index
* @h: pointer to list
* @idx: index
* @n: value of new node
* Return: list with new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i;
	dlistint_t *node, *new;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	new = (*h);
	node->prev = NULL;
	node->next = NULL;
	node->n = n;
	if (idx == 0)
	{
		if (*h == NULL)
			(*h) = node;
		else
		{
			node->next = (*h);
			new->prev = node;
			(*h) = node;
		}
		return (node);
	}
	for (i = 0; new->next != NULL || i + 1 == idx; i++)
	{
		if (i + 1 == idx)
		{
			if (new->next != NULL)
				new->next->prev = node;
			node->next = new->next;
			new->next = node;
			node->prev = new;
			return (node);
		}
		new = new->next;
	}
	free_dlistint(node);
	return (NULL);
}
