#include "lists.h"

/**
 * pop_listint - deletes headnode of list
 * @head: double  pointer
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int m;

	if (!head || !*head)
		return (0);

	m = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (m);
}
