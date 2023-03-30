#include "lists.h"

/**
 * size_t print_list - prints all elements in list
 * @h: holds elements to be printed
 * Return: no. of nodes
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil\n");
		else
			printf("[%u]%s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
