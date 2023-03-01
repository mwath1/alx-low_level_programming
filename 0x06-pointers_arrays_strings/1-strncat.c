#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: 1st string
 * @src: 2nd string
 * @n: number of bytes to be used from src
 * Return: a ponter to resulting dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	int k = 0;
	char *p = &dest[i];

	while (k < n && src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (*p);
}
