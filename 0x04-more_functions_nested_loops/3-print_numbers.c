#include <stdio.h>

/**
 * print_numbers - Print numbers from 0 to 9
 *
 * Return: 0
 */

void print_numbers(void)
{
	int x;

	x = 0;
	for (x <= 9)
	{
		_putchar('x');
		x++;
	}
	_putchar('\n');
}
