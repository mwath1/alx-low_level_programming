#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: 1st string
 * @src: 2nd string
 * Return: result string dest
 */
char *_strcat(char *dest, char *src)
{
	int n = 0;
	int p = 0;

	while (dest[n] != '\0')
	{
		n++;
	}
	while (src[p] != '\0')
	{
		dest[n] = src[p];
		n++;
		p++;
	}
	dest[n] = '\0';
	return (dest);
}
