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
		putchar('\n');
	}
	else
		for (i = 1; i <= n; i++)
		{
			putchar('_');
		}
	putchar('\n');
}
