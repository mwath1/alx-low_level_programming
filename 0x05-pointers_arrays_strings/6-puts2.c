#include "main.h"

/**
 * puts2 - print every characterof a string
 * @str: provides characters as string
 * Return: characters of a string
 */

void puts2(char *str)
{
	int v = 0, len = 0;
	int g;
	char *p = str;

	while (*p != '\0')
	{
		p++;
		len++;
	}
	v = len - 1;
	for (g = 0; g <= v; g++)
	{
		if (g % 2 == 0)
		{
			_putchar(str[g]);
		}
	}
	_putchar('\n');
}

