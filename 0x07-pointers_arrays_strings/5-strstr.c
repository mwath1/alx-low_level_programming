#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: location of substring needle
 * @needle: to be found
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	for (; *h != '\0'; h++)
		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
	if (*n == '\0')
		return (h);
}
