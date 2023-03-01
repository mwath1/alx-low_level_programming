#include "main.h"
/**
 * string_toupper - changes all lowercase to a string uppercase
 * @n: character pointer
 * Return: 0
 */

char *string_toupper(char *n)
{
	int v = 0;

	while (n[v] != '\0')
	{
		if (n[v] >= 'a' && n[v] <= 'z')
			n[v] = n[v] - 32;
		i++;
	}
	return (n);
}
