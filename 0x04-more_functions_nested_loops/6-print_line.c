#include "main.h"
/**
 * print_line - draw straight line in the terminal
 * @n: working integer
 * Return: 0
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
	_putchar('\n');
}
