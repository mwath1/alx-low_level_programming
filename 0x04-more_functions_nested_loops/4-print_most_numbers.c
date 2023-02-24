#include "main.h"

/**
 * print_most_numbers - print numbers 0 to 9
 * do not print 2 and
 * Return: 0
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
		{
			continue;
		}
		else
		{
			putchar(n + '0');
		}
	}
	putchar('\n');
}
