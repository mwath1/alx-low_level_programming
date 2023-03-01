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
	int i;
	int k;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}
