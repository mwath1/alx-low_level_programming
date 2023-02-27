#include "main.h"

/**
 * _strcpy - copy string pointed by src
 * @dest:to be pasted
 * @src: to be copied
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, n = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (; n < i; n++)
	{
		dest[n] = src[n];
	}
	dest[i] = '\0';
	return (dest);
}
