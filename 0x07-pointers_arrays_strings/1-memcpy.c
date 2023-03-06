#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: current memory location.
 * @src: new  memory location.
 * @n: number of bytes.
 * Return: copied memory.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r;

	for (r = 0; r < n; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
