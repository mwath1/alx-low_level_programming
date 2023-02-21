#include "main.h"
/**
 * main - print_x10 alphabet in lowercase
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int b;
	char c;

	for (b = 0; b <= 10; b++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}

