#include "main.h"

/**
 * rev_string - reverse string
 * @s: string
 * Return: rev string
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int n;

	while (s[counter] != '\0')
		counter++;
	for (n = 0; n < counter; n++)
	{
		couter--;
		rev = s[n];
		s[n] = s[conter];
		s[counter] = rev;
	}
}
