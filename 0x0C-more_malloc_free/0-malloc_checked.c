#include "main.h"
/**
 * malloc_checked - allocates memmory
 * @b: value for memory allocaion
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
