#include "main.h"

/**
 * reverse_array - reverse contents of an array of int type
 * @a: array pointer
 * @n: no.of elements in array
 * Return: null
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int p;

	for (i = 0; i < n--; i++)
	{
		p = a[i];
		a[i] = a[n];
		a[n] = p;
	}
}
