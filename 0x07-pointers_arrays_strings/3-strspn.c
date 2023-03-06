#include "main.h"

/**
 *  _strspn - gets the length of a prefix substring
 *  @s: string
 *  @accept: lenth of string
 *  Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int len;

	while (*s)
	{
	for (i = 0; acceot[i]; i++)
	{
		if (*s == accept[i])
		{
			len++;
			break;
		}
		else if (accept[i + 1] == '\0')
			return (len);
	}
	s++;
	}
	return (len);
}
