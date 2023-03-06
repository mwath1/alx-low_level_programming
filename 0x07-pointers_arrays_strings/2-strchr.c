#include "main.h"

/**
 * _strchr - locates a char in a string
 * @s: address of string of characters.
 * @c: character to be located
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
