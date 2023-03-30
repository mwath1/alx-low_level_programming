include "lists.h"

/**
 * add_node - adds a new node at the end of a list_t list.
 * @head: points to address yhat holds elements
 * @str: string to duplicate
 * Return: address of new element, NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newptr;
	unsigned int len = 0;

	while (str[len])
	len++;

	new = malloc(sizeof(list_t));
	if (!newptr)
		return (NULL);

	newptr->str = strdup(str);
	newptr->len = len;
	newptr->next = (*head);
	(*head) = newptr;

	return (*head);
}
