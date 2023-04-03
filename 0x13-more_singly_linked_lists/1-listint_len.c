#include "lists.h"

/**
 * listint_len - return no of elements
 * @h: points to list holding elements
 * Return:  number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t num;

	num = 0;
	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
