#include "main.h"

/**
 * print_array - print n elements of an array of integers
 * @n: integers
 * @a: pointer
 * Return: arry of n
 */

void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < (n - 1); k++)
	{
		printf("%d", a[k]);
	}
	if (k == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
