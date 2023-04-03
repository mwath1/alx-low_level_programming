#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a list.
 * @head: holds list address.
 * @index:  index of the node, starting at 0.
 * Return: NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int d = 0;
	listint_t *temp = head;

	while (temp && d < index)
	{
		temp = temp->next;
		d++;
	}
	return (temp ? temp : NULL);
}
