#include "lists.h"

/**
 * add_nodeint - adds new node at beginningof list
 * @head: point to address of list
 * @n: integer
 * Return: address of new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

