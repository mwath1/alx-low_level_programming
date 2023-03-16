#include "main.h"
/**
 * _calloc - allocate memory of an array
 * @nmemb: array of elements
 * @size: size of array
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, n = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	n = nmemb * size;
	p = malloc(n);
	if (p == NULL)
		return (NULL);
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
