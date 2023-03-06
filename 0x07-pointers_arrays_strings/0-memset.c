#include "main.h"

/**
 * _memset - fill memory with a constant byte.
 * @s: pointer to memory to be filled.
 * @b: constant value requred.
 * @n: value of bytes to be changed
 * Return: ponter to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
