#include "main.h"
/**
 * times_table - pint table from 0 -9
 *
 * Return: 0
 */
void times_table(void)
{
	int g, h, res;

	for (g = 0; g <= 9; g++)
	{
		_putchar('0');
	}
		for (h = 0; h <= 9; h++)
		{
			res = (g * h);
			if (h != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			else if (res >= 10)
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else if (res < 10 && h != 0)
			{
				_putchar(' ');
				_putchar((res % 10) + '0');
			}
			else
				_putchar((res % 10) + '0');
		}
		_putchar('\n');
}
