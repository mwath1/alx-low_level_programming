#include "main.h"

/**
 * print_rev - print sring in reverse
 * @s: string to be reversed
 * Return: s in reverse
 */

void print_rev(char *s)
{
	int i, length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (i = length; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
