#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sum of all list
 * @head: pointer to start list
 * Return: the sum of all elements of list
 */
int sum_listint(listint_t *head)
{
	int counter = 0;

	while (head != NULL)
	{
		counter = counter + head->n;
		head = head->next;
	}
	return (counter);
}
