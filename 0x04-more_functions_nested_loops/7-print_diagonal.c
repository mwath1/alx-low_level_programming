#include "main.h"
/**
 * print_diagonal - draw diagonal line on the terminal
 * @n: used as contol
 * Return: 0
 */
void print_diagonal(int n)
{
	int p, m;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
		for (p = 0; p < n; p++)
		{
			for (m = 0; m < n; m++)
			{
				if (m == p)
					putchar('\\');
				else if (m < p)
					putchar(' ');
			}
			putchar('\n');
		}
}
