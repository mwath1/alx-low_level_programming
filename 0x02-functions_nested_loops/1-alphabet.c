#include "main.h"

/**
 * main - print alphabet in lower case
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char p;

	for (p = 'a'; p <= 'z'; p++)
	{
		_putchar(p);
	}
	_putchar('\n');
}
