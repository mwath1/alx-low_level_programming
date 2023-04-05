#include "lists.h"

/**
 * free_listint_safe -  frees a list with a loop
 * @h: holds first node
 * Return: no. of freed elements
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *temp;
	int new;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		new = *h - (*h)->next;
		if (new > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;

	return (len);
}
